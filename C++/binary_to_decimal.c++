#include <bits/stdc++.h>
using namespace std;

int main(){
   int binNum;
   cin>> binNum;
   int ans = 0;
    int pow= 1;

    while (binNum>0)
    {
        /* code */
        int rem;
        rem = binNum % 2;
        
        ans += rem * pow;
        binNum = binNum/10;

        pow = pow * 2;
    }
    
    cout<< ans;


    return 0;
}