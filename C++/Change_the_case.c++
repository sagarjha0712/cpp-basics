/* You are given a character(c). Convert the character. As following-
> If the character is in lowercase, convert it into upper case
> If the character is in uppercase, convert it into lower case. */


#include <bits/stdc++.h> 
using namespace std;

int main() {
 char c;

    cin >> c;

    if (c >= 'a' && c <= 'z') {
        c = c - 32;
        cout << c <<endl;
    }
    
    else if (c >= 'A' && c <= 'Z') {
        c = c + 32;
       cout << c << endl;
    } else {

       cout << "The entered character is not an alphabet." <<endl;
    }

    return 0;
}
