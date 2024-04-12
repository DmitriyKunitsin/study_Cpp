#include <iostream>

using namespace std;

int main() {
    string username;
    string password;
    bool success;
    cout << "\tGame Designers Network\n";
    do {
        cout << "\nUsername: ";
        cin >> username;
        cout << "\nPassword: ";
        cin >> password;
        if (username == "D.Kunicin" && password == "1234") {
            cout << "\n Hey Dima";
            success = true;
        } else if (username == "D.Miya" && password == "1234") {
            cout << "\nWhats up, Dimon";
            success = true;
        } else if (username == "guest" || password == "guest") {
            cout << "\nWelcome. gues. ";
            success = true;
        } else {
            cout << "\nYour login failde";
            success = false;
        }
    } while (!success);
    return 0;
}