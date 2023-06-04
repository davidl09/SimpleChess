#include <iostream>
#include <array>


namespace Chess{

    struct Pos{
        int rank;
        int file;
    };

    enum Pieces{
        EMPTY,
        WPAWN,
        BPAWN,
        WKNIGHT,
        BKNIGHT,
        WBISHOP,
        BBISHOP,
        WROOK,
        BROOk,
        WQUEEN,
        BQUEEN,
        WKING,
        BKING,
    };

    class Board{

        public:
            Board();
            void print();
            static Pos to_rank_file(int index);
            static int to_index(Pos rank_file);

        private:
            std::array<Pieces, 64> board;
    };

    /*class Move{
        public:
            static std::string to_algebraic(Move move);
            std::string to_algebraic();
    };*/
}