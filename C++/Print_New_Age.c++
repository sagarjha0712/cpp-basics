#include <bits/stdc++.h>
using namespace std;

int main(){
  int age;
  cin>> age;

  if (age%3==0 && age%5==0){
    age /=15;
    cout <<age;
  }else{
    cout << age;
  }

    return 0;
}