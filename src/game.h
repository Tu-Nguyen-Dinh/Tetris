#pragma once
#include "grid.h"
#include "blocks.cpp"
class Game
{
    public:
        Game();
        Block GetRandomBlock();
        std::vector<Block> GetAllBlocks();
        void Draw();
        Grid grid;
        void HandleInput();

        void MoveBlockLeft();

        void MoveBlockRight();

        void MoveBlockDown();

    private:
        bool IsBlockOutSide();
        void RotateBlock();
        void LockBlock();
        bool BlockFits();
        std::vector<Block> blocks;
        Block currentBlock;
        Block nextBlock;


};