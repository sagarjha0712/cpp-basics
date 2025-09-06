#include <bits/stdc++.h>
using namespace std;
/* void printInteger (int n){
     for( int i=1; i<=n; i++){
     for( int j=1; j<=i; j++){
        cout <<"*";
    }
    cout << endl;
    }
} */     //Shift + Alt + A
int main() {
    /* cout << "Hello, World!" << endl;
    cout << endl;

   
     printInteger (5);
     cout << endl;
      int a= 10;
    float b= 3.14;
    char c= 'A';
    bool d= true;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << boolalpha << d;       //flag variable
    cout << endl;
    cout << endl;

    cout <<sizeof (a) <<endl;      //Find size of datatype
    cout <<sizeof (c) <<endl;
    cout << endl;
 */

 //Implicit
/* int x=10;
char y= 'a';  //a=97 (ASCII value)
x=x+y;        //10+97= 107
cout << x<< endl;     

float z= x+2.0; 
cout << z<< endl; */

/* //Explicit                   
double x=1.2;
//cout << x+1 ;
int sum = (int)x +1;            //(type)expression
cout << sum<<endl; */

/* int n;
cin>> n;
cout << char(n);
 */

/*  char ch;
 cin >> ch;
 cout << int(ch); */

	/* char c ;
    char x ;
    char s ;

     cin >> c;
     cin >> x;
     cin >> s;

    int sum = int(c) + int(x) + int(s);

    cout << sum;
 */

 int a, b;
    cin >> a >> b;

    if (a <= 10 && b >= 10) {
        cout << "True" << endl;                 //True !=true -> Case Sensitive
    } else {
        cout << "False" << endl;
    }

    if (a % 2 == 0 || b % 2 == 0) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    if (a != b) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
/* 
    float a = 2;
    float b = 3;
    float c = 4;
    float d = 5;
    float result = (a+b+c+d)/4;
    cout << result; */

    return 0;
}