//
// Created by paypaytr on 8/4/17.
//

#include "ColorPuzzle.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>



using namespace std;

ColorPuzzle::ColorPuzzle(string abi) {
    setfileName(abi);
}

void ColorPuzzle::setfileName(string abi) {
    filename=abi;
}

void ColorPuzzle::printIntro() {
    cout << " ssadasd\n";
}

void ColorPuzzle::theTest() {
    fstream file;
    int kacincisira=0;
    int varmi=0;
    int b;
    string x;
    b=file_line_num();
    file.open(filename);
    if ( !file ) exit( 1 );

    for(int i=0;i<b;i++) {
        getline(file, x);
       x.copy(a[i],SIZE);
        a[i][x.size()]='\0';
    }
    //arrayle cagiriliyo o arayi dolduruyo arguman2 /txt.txt acark ordaki satirlari
    //getline ile filestreamdan x satirina atiyo
    //x satirinida arraya atiyo ordan x.copy ile max kadar elemanini

    file.close();
    //game Starts
    int k=0;
    int m=0;

    for(int i=1;i<x.size();i++){
        for(int j=0;j<x.size();i++){
            for(int z=0;z<sizeof(a[0]);z++){
                if(a[i][j]==a[0][0] && kacincisira==0){
                    yol[kacincisira]=a[i][j];
                    kacincisira++;

                }
                else{
                    for(k=0;k<sizeof(a[0]);k++){
                        if(a[i][j]==a[0][k]){
                            for(m=k;m>0;m--){
                                if(!(yol[kacincisira]==a[0][m])) //mantıken geldigi yol listesinde dogru ise
                                    break;//ordan devam eder iki uc orange sorunu cozulur
                            }
                            if(k+1!=sizeof(a[0])){
                                if(a[i][j+1]==a[0][k+1] && c==0){
                                    c++;
                                    bozulmadan[0]=i;
                                    bozulmadan[1]=j;
                                    bnumara=kacincisira;
                                    strcpy(yol,tempyol);
                                    yol[kacincisira]=a[i][j];
                                    kacincisira++;
                                    j=j+1;
                                    //make it so arttir yola ekle devam
                                }
                                if(a[i+1][j]==a[0][k+1] && c==1){
                                    c++;
                                    bozulmadan[0]=i;
                                    bozulmadan[1]=j;
                                    bnumara=kacincisira;
                                    strcpy(yol,tempyol);
                                    yol[kacincisira]=a[i][j];
                                    kacincisira++;
                                    i=i+1;
                                    //make itso
                                }
                                if(a[i][j-1]==a[0][k+1] && c==2){
                                    c++;
                                    bozulmadan[0]=i;
                                    bozulmadan[1]=j;
                                    bnumara=kacincisira;
                                    strcpy(yol,tempyol);
                                    yol[kacincisira]=a[i][j];
                                    kacincisira++;
                                    j=j-1;
                                }
                                if(a[i-1][j]==a[0][k+1] && c==3){
                                    c++;
                                    bozulmadan[0]=i;
                                    bozulmadan[1]=j;
                                    bnumara=kacincisira;
                                    strcpy(yol,tempyol);
                                    yol[kacincisira]=a[i][j];
                                    kacincisira++;
                                    i=i-1;
                                    //makitoso
                                }
                                else{
                                    i=bozulmadan[0];
                                    j=bozulmadan[1];
                                    strcpy(tempyol,yol);
                                    kacincisira=bnumara;

                                }

                            }
                        }
                    }
                }
            }




            }
        }
    }


int ColorPuzzle:: file_line_num(){
    int i;
    ifstream f(filename);
    string line;
    for ( i = 0;getline(f, line); ++i)
        ;
    //satr sayisini hesapliyor textteki sonuna kadar getline ile giderek
    f.close();
    return i;
}
