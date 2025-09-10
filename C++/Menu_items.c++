#include <bits/stdc++.h>
using namespace std;

int main() {
    int P, Q, R; 
    cin >> P >> Q >> R; // prices of A, B, C

    char choice, subchoice;
    cin >> choice >> subchoice; // input choice and subchoice

    int cost = 0;

    if (choice == 'A') {
        cost = P;
    } else if (choice == 'B') {
        cost = Q;
    } else if (choice == 'C') {
        cost = R;
    } else {
        cout << "Invalid choice." << endl;
        return 0;
    }

    if (subchoice == 'X') {
        cost += 10;
    } else if (subchoice == 'Y') {
        cost += 15;
    } else if (subchoice == 'Z') {
        cost += 20;
    } else {
        cout << "Invalid choice." << endl;
        return 0;
    }

    cout << cost << endl;
    return 0;
}
