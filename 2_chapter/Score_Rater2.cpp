#include <iostream>

using namespace std;

int main() {
    int score;
    cout << "Введите колличество ваших очков: ";
    cin >> score;
    if (score >= 1000) {
        cout << "Ваши очки 1000 или больше!\n";
    } else {
        cout << "Ваши очки меньше 1000\n";
    }
    return 0;
}