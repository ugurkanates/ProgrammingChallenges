#include <iostream>
#include <unistd.h>
#include "grid.h"
#include <signal.h>

using namespace std;

/*oid my_handler(sig_t s){
    printf("Caught signal \n");
    exit(1);

}*/


int main() {
    //signal (SIGINT,my_handler);
    grid();
    return 0;
}
