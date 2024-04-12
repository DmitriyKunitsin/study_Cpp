#include <iostream>

using namespace std;

int main() {
    int score;
    cout << "Введите ваши очки : ";
    cin >> score;
    if (score >= 1000) {
        cout << "Сумма ваших очков 1000 или больше\n";
    } else if (score >= 500) {
        cout << "Сумма ваших очков 500 или более\n";
    } else if (score >= 250) {
        cout << "Сумма ваших очков 250 или больше\n";
    } else {
        cout << "Сумма твоих очков 250 или меньше\n";
    }
    return 0;
}