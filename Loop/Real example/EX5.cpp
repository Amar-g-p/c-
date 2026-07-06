#include <iostream>
using namespace std;

int main() {
    int password;
    cin >> password;

    while (true) {
        if (password == 1234) {
            cout << "Access Granted!" << endl;
            break;   // Exit the loop
        } else {
            cout << "Wrong Password! Try Again." << endl;
            break;
        }
    }

    return 0;
}