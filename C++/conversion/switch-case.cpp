#include <iostream>
using namespace std;

int main() {
    int amount, note;

    cout << "Enter Amount: ";
    cin >> amount;

    note = 100;

    switch (note) {
        case 100:
            cout << "100 Notes = " << amount / 100 << endl;
            amount = amount % 100;

        case 50:
            cout << "50 Notes = " << amount / 50 << endl;
            amount = amount % 50;

        case 20:
            cout << "20 Notes = " << amount / 20 << endl;
            amount = amount % 20;

        case 1:
            cout << "1 Notes = " << amount / 1 << endl;
            break;

        default:
            cout << "Invalid";
    }

    return 0;
}