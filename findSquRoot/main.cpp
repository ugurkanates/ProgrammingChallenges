#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main() {
    int nokta=0;
    int fpart=0,spart=0;
    string sayi;
    string first;
    string delim=".";

    cout << " sayi giriniz kok icin\n";
    cin >> sayi;
    nokta=sayi.find(delim);
    if(nokta!=-1) {
        first = sayi.substr(0, nokta);
        sayi.erase(0, nokta + delim.length());
        fpart = stoi(first);
        spart = stoi(sayi);
    }
    else
        fpart = stoi(sayi);
    if(log10(spart)+1%2==1 && nokta!=-1)
        spart=spart*10;
    int i=0;
    while(1){
        if(i*i>fpart/100){
            i--;
            break;
        }
        else if(i*i==fpart/100)
            break;
        else
            i++;
    }
    fpart=fpart-i*i*100;
    int j=0;
    while(1){
        if(20*i*j+j*j >fpart){
            j--;
            break;
        }
        else if(20*i*j+j*j==fpart)
            break;
        else
            j++;
    }
    int b=0;
    while(1){
        if(b*b>spart/100 && spart>100){
            b--;
            break;
        }
        else if(b*b>spart ){
            b--;
            break;
        }
        else if(b*b==spart/100 && spart>100)
            break;
        else if(b*b==spart)
            break;
        else
            b++;
    }
    spart=(spart-b*b)%10;

    cout << i << j <<"."<< b<<spart ;
    return 0;
}

