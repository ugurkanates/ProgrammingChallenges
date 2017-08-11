#include <iostream>
#include <unistd.h>
#include "grid.h"

#define ROW 20
#define COLUMN 20  //those are for creating 20x20 arena serve as game table
#define WELCOME 39
using namespace std;





void printGame(bool table[][COLUMN]){

    for(int i=0;i<ROW;i++) {
        for (int j = 0; j < COLUMN; j++) {
            if (table[i][j] == true)
                cout << "*";
            else
                cout<< " " ;
        }
        cout<<endl;
    }
}

void tableInitRandom(){

}
void printGameWelcome(){
    int i,j,z;
    for(i=0;i<ROW+1;i++)
        cout<<"* ";
    cout<<endl;
    for(j=1;j<COLUMN;j++) {
        cout << "*";
        if(j==COLUMN/2) {
            cout << " W E L C O M E T H E G A M E O F L I F E"; //39 word keep number
            for (z = WELCOME; z < ROW; z++)
                cout << "  ";
            cout << "*" << endl;
        }
        else{
            for (z = 0; z < ROW; z++)
                cout << "  ";
            cout << "*" << endl;

        }

    }
    for(i=0;i<ROW+1;i++)
        cout<<"* ";
    cout << endl;
}
void init_choose(bool table[][COLUMN],int choose){
    if(choose==0){ //glider tester
        for(int i=0;i<ROW;i++)
            for(int j=0;j<COLUMN;j++)
                table[i][j]=false;

        table[3][3]=true;
        table[4][4]=true;
        table[5][3]=true;
        table[5][4]=true;
        table[5][2]=true;

        table[10][10]=true;
        table[11][11]=true;
        table[12][9]=true;
        table[12][10]=true;
        table[12][11]=true;

    }
}
void copy_temp(bool table[][COLUMN],bool temp[][COLUMN]){
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COLUMN;j++){
            temp[i][j]=table[i][j];
        }
    }
}
void mainGame(){
    //printGameWelcome();
    bool table[ROW][COLUMN];
    bool temp[ROW][COLUMN];
    int choose=0;
    init_choose(table,choose);
    while(1) {
        usleep(15*100000);
        copy_temp(table, temp);
        printGame(temp);
        for(int i=0;i<ROW;i++){
            for(int j=0;j<COLUMN;j++){
                if(temp[i][j]==true){
                    int neigh=0;
                    if(temp[i][j + 1])
                        neigh++;
                    if(temp[i][j - 1])
                        neigh++;


                    if(temp[i-  1][j])
                        neigh++;
                    if(temp[i - 1][j + 1])
                        neigh++;
                    if(temp[i - 1][j - 1])
                        neigh++;

                    if(temp[i + 1][j + 1])
                        neigh++;
                    if(temp[i + 1][j])
                        neigh++;
                    if(temp[i+ 1 ][j - 1])
                        neigh++;

                    if(neigh<2 || neigh >3)
                        table[i][j]=false;
                }
                if(!temp[i][j]){
                    int neigh=0;
                    if(temp[i][j + 1])
                        neigh++;
                    if(temp[i][j - 1])
                        neigh++;


                    if(temp[i-  1][j])
                        neigh++;
                    if(temp[i - 1][j + 1])
                        neigh++;
                    if(temp[i - 1][j - 1])
                        neigh++;

                    if(temp[i + 1][j + 1])
                        neigh++;
                    if(temp[i + 1][j])
                        neigh++;
                    if(temp[i+ 1 ][j - 1])
                        neigh++;

                    if(neigh == 3)
                        table[i][j]=true;
                }
            }
        }
    }
}

int main() {
    mainGame();
    return 0;
}

