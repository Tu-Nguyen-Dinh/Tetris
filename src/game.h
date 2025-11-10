#pragma once
#include "grid.h"
#include "blocks.cpp"
class Game
{
    public:
        Game();

        ~Game();

        void Draw();
        
        void HandleInput();

        Music music;

        void MoveBlockDown();
        bool gameOver;
        int score;

    private:
        Grid grid;
        Block GetRandomBlock();
        void MoveBlockLeft();

        void MoveBlockRight();
        std::vector<Block> GetAllBlocks();
        void Reset();
        void UpdateScore(int lineCleared, int moveDownPoint);
        bool IsBlockOutSide();
        void RotateBlock();
        void LockBlock();
        bool BlockFits();
        std::vector<Block> blocks;
        Block currentBlock;
        Block nextBlock;
        Sound rotateSound;
        Sound clearSound;


};