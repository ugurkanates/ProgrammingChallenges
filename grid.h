//
// Created by paypaytr on 8/3/17.
//

#ifndef GAMEOFLIFE_GRID_H
#define GAMEOFLIFE_GRID_H

#include <signal.h>

#define ROW 50
#define COLUMN 50


class grid {

private:
    bool table[ROW][COLUMN];
    bool temp[ROW][COLUMN];
    //later implement a scoreboard writes seconds to file and read everytime if there is not deleted


public:
    grid();

    void printOpening();
    void printTable();
    void printStarter();
    void printQuit();

    void setTable(bool a,int i,int j);
  //  bool** getTable();
    void initTable();
    void setGame();
    void resetGame();
    void copy_temp();


    int chooseStarter();

    void gameLoop();

    void my_handler(sig_t s);
    void theGame();
};



#endif //GAMEOFLIFE_GRID_H
