//
// Created by paypaytr on 8/4/17.
//

#ifndef CHALLENGE1_COLORPUZZLE_H
#define CHALLENGE1_COLORPUZZLE_H
#include <iostream>
#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
#include <fstream>
#define SIZE 50

using namespace std;

class ColorPuzzle {
public:
    ColorPuzzle(string abi);
    void setfileName(string abi);
    void printIntro();
    void theTest();
    int file_line_num();

    char yol[SIZE];
    char bozulmadan[2];
    int bnumara;
    char tempyol[SIZE];
    int c;
private:
    int **rowp;
    string filename;
    ifstream fin;
    string all[SIZE];
    int sizefile;
    char a[][SIZE];




};


#endif //CHALLENGE1_COLORPUZZLE_H
