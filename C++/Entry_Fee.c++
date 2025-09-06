#include <bits/stdc++.h>
using namespace std;

int main(){
  int entryFee;
  cin>> entryFee;
  int age;
  cin>> age;
  char gender;
  cin>> gender;
  int finalEntryFee= entryFee;

  if (age>=15){
   if (gender == 'M') {
    finalEntryFee = entryFee + 20;

   }
  }
  cout<< finalEntryFee;

    return 0;
}