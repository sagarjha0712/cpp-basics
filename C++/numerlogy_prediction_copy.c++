#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string name;
    cin >> name;
      int total = 0;
    for (char ch : name) {  //Range Based for loop
        if (isalpha(ch)) { // consider only letters
            ch = tolower(ch); 
            total += (ch - 'a' + 1);
        }
    }
      int remainder = total % 3;
    if (remainder == 0)
        cout<<"Bad";
    else if (remainder == 1)
        cout<< "Good";
    else
        cout<<"Excellent";

    return 0;
}