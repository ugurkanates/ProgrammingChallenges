//
// Created by paypaytr on 8/3/17.
//
#include <iostream>
#include "grid.h"
#include <unistd.h>
#include <signal.h>
#include <cstdlib>
#include <stdio.h>

#define SLEEPTIME 15*100000 //aprox time for good display.
using namespace std;
#define ROW 50
#define COLUMN 50


grid::grid() {
    //obj created,main game function will be called
    theGame();
}

void grid::printOpening() {
    cout<< "##      ## ######## ##        ######   #######  ##     ## ######## \n"
            "##  ##  ## ##       ##       ##    ## ##     ## ###   ### ##       \n"
            "##  ##  ## ##       ##       ##       ##     ## #### #### ##       \n"
            "##  ##  ## ######   ##       ##       ##     ## ## ### ## ######   \n"
            "##  ##  ## ##       ##       ##       ##     ## ##     ## ##       \n"
            "##  ##  ## ##       ##       ##    ## ##     ## ##     ## ##       \n"
            " ###  ###  ######## ########  ######   #######  ##     ## ######## " <<
                                                                                  endl;
}

void grid::printStarter() {
    cout << "This is 0 player game made originally by John Horton Conway in 1970\n";
    cout << "Tried to implement with C++ techniques. Thanks . Ugurkan Ates\n\n\n";
    cout << "Please choose a starter to fiil screen with/to game start\n";
    cout<<"Choose with 1,2,3,.. via keyboard,when choosen game will start\n";
    cout<<"1-Glider,2-Small Exploder,3-The Exploder,4-10 Cell Row,5-Spaceship,6-Tumbler,7 will coming update\n";
}

void grid::printTable() {
    for(int i=0;i<ROW;i++) {
        for (int j = 0; j < COLUMN; j++) {
            cout << (table[i][j] ? "*" : " ");
        }
        cout<<endl;
    }
}

void grid::printQuit() {
    cout << " Thank you for watching erhm playing the game :').\n ";
    cout << "hope you enjoyed. Ugurkan Ates\n";
}



int grid::chooseStarter() {
    int select=0;
    printStarter();
    cin>>select;
    return select;
}

void grid::setTable(bool a,int i,int j) {
    table[i][j]=a;
}

void grid::initTable() {
    for(int i=0;i<ROW;i++)
        for(int j=0;j<COLUMN;j++)
            setTable(false,i,j);

}

/*bool ** grid::getTable() {
    return &table[0][0];
}
 */
void grid::copy_temp(){
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COLUMN;j++){
            temp[i][j]=table[i][j];
        }
    }
}
void grid::gameLoop() {
    while(1){
        usleep(SLEEPTIME);
        copy_temp();
        printTable();
        for(int i=0;i<ROW;i++) {
            for (int j = 0; j < COLUMN; j++) {
                if (temp[i][j] == true) {
                    int neigh = 0;
                    if (temp[i][j + 1])
                        neigh++;
                    if (temp[i][j - 1])
                        neigh++;


                    if (temp[i - 1][j])
                        neigh++;
                    if (temp[i - 1][j + 1])
                        neigh++;
                    if (temp[i - 1][j - 1])
                        neigh++;

                    if (temp[i + 1][j + 1])
                        neigh++;
                    if (temp[i + 1][j])
                        neigh++;
                    if (temp[i + 1][j - 1])
                        neigh++;

                    if (neigh < 2 || neigh > 3)
                        table[i][j] = false;
                }
                if (!temp[i][j]) {
                    int neigh = 0;
                    if (temp[i][j + 1])
                        neigh++;
                    if (temp[i][j - 1])
                        neigh++;


                    if (temp[i - 1][j])
                        neigh++;
                    if (temp[i - 1][j + 1])
                        neigh++;
                    if (temp[i - 1][j - 1])
                        neigh++;

                    if (temp[i + 1][j + 1])
                        neigh++;
                    if (temp[i + 1][j])
                        neigh++;
                    if (temp[i + 1][j - 1])
                        neigh++;

                    if (neigh == 3)
                        table[i][j] = true;
                }
            }
        }
        //break; for printing if they are correct
    }
}
void grid::setGame() {
    srand (time(NULL)); //this is done to seed units. Units are randomly created.
    int selection=0,randi=0,randj=0;
    initTable();
    selection=chooseStarter();
    randi=rand()%ROW+1; //1 for proving its not 0.
    randj=rand()%COLUMN+1;
    switch(selection){
        //i always choose shape head(top) as starting unit to fiil rest.
        case 7:

            break;
        case 1: // for Glider starter unit.
            //error check needed for all units(starting point actually means something not blocking unit)
            setTable(true,randi,randj);
            setTable(true,randi+1,randj+1);
            setTable(true,randi+2,randi-1);
            setTable(true,randi+2,randj);
            setTable(true,randi+2,randj+1);
            break;

        case 2: // for Small Exploder starter unit.
            //error check needed for all units(starting point actually means something not blocking unit)
            setTable(true,randi,randj);
            setTable(true,randi+1,randj-1);
            setTable(true,randi+1,randj);
            setTable(true,randi+1,randj+1);
            setTable(true,randi+2,randj-1);
            setTable(true,randi+2,randj+1);
            setTable(true,randi+3,randj);
            break;

        case 3: //for Exploder starter unit
            //error check needed for all units(starting point actually means something not blocking unit)
            setTable(true,randi,randj);
            setTable(true,randi,randj-2);
            setTable(true,randi,randj+2);
            setTable(true,randi+1,randj-2);
            setTable(true,randi+1,randj+2);
            setTable(true,randi+2,randj-2);
            setTable(true,randi+2,randj+2);
            setTable(true,randi+3,randj-2);
            setTable(true,randi+3,randj+2);
            setTable(true,randi+4,randj-2);
            setTable(true,randi+4,randj);
            setTable(true,randi+4,randj+2);

            break;

        case 4: // for 10 Cell Starting Unit.
            for(int i=0;i<10;i++)
                setTable(true,randi,randj+i);

            break;

        case 5: //for Spaceship Starting Unit (yeah).
            setTable(true,randi,randj);
            setTable(true,randi,randj+1);
            setTable(true,randi,randj+2);
            setTable(true,randi,randj+3);
            setTable(true,randi+1,randj-1);
            setTable(true,randi+1,randj+3);
            setTable(true,randi+2,randj+3);
            setTable(true,randi+3,randj-1);
            setTable(true,randi+3,randj+2);


            break;

        case 6:
            cout<< "not implemented yet \n";
            break;
        default:
            cout << "Error on Selection. Restart Please\n";
    }
}

void grid::theGame() {
   // signal (SIGINT,my_handler);
    printOpening();
    setGame();
    gameLoop();
    printQuit();
}

//Error check for not spawning random numbers at end of row or starting row must#
//scoreboard is priority.