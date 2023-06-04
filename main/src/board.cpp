#include "board.hpp"

using namespace Chess;

Board::Board(){
    for(auto it = board.begin(); it != board.end(); ++it){
        *it = (Pieces)(std::rand() % 13);
    }
}

void Board::print(){
    std::string out;
    for(auto it = board.begin(); it != board.end(); ++it){
        switch(*it){
            case EMPTY: out.append("##"); break;
            case WPAWN: out.append("WP"); break;
            case BPAWN: out.append("BP"); break;
            case WKNIGHT: out.append("WN"); break;
            case BKNIGHT: out.append("BN"); break;
            case WBISHOP: out.append("WB"); break;
            case BBISHOP: out.append("BB"); break;
            case WROOK: out.append("WR"); break;
            case BROOk: out.append("BR"); break;
            case WQUEEN: out.append("WQ"); break;
            case BQUEEN: out.append("BQ"); break;
            case WKING: out.append("WK"); break;
            case BKING: out.append("BK"); break;
        }
        out.append("  ");
        if((it - board.begin() + 1) % 8 == 0){
            out.append("\n\n");
        }
    }
    std::cout << out << std::endl;
}

Pos Board::to_rank_file(int index){
    return (Pos){.rank = index / 8, .file = index % 8};
}

int Board::to_index(Pos rank_file){
    return 8 * rank_file.rank + rank_file.file;
}