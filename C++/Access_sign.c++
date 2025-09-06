#include <bits/stdc++.h>
using namespace std;

void printSign(int N) {
    if (N>0) {
        cout<<"The number is positive";
    } 
     else if (N<0) {
        cout<<"The number is negative";
    }
    else {
        cout<<"The number is zero";
    }

}

int main(){

    printSign(0);
  


    return 0;
}