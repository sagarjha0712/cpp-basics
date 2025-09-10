#include <iostream>
using namespace std;

int getBit (int n, int pos) {
    return ((n & (1<<pos))!=0);
}

int setBit (int n, int pos) {
    return (n | (1<<pos));
}

int clearBit (int n, int pos){
    int mask = ~(1<< pos);
    return (n & mask);
}

int updateBit (int n, int pos, int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}

int main () {
    //cout << getBit (45 , 2) << endl;
   //cout << setBit (45 , 1) << endl;
   //cout << clearBit (45 , 4) << endl;
   cout << updateBit (45 , 4, 7) << endl;
    return 0;
}