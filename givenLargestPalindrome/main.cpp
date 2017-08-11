#include <iostream>
#include <cmath>
using namespace std;

bool isPalindrome(int n){
    int  reversedInteger = 0, remainder, originalInteger;


    originalInteger = n;

    // reversed integer is stored in variable
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
       return true;

    return 0;
}

int main() {
    int sayi=0;
    int i=0;
    int palindrome=0;
    cout << "enter number\n";
    cin >> sayi ;
        for(int i=pow(10,sayi)-1;i>pow(10,sayi-1);i--) {
            for(int j=pow(10,sayi)-1;j>pow(10,sayi-1);j--){
                if(isPalindrome(i*j) && i*j>palindrome){
                    palindrome=i*j;
                    break;
                }

            }
        }

    cout << " here's palindrome" << palindrome;

    return 0;
}