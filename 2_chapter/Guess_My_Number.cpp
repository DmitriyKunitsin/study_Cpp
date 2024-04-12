#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int secret_number = rand() % 100 + 1; //сдучайное число от 1 до 100
    int tries = 0;
    int guess;
    cout << secret_number << endl;
    cout << "\tДобро пожаловать в игру Guess My Number\n\n";
    cout << "Угадайте загаданное число от 1 до 100 за меньшее колиичество попыток\n";
    do {
        cout << "Введите число : ";
        cin >> guess;
        ++tries;
        if (guess > secret_number) {
            cout << "Слишком много!\n\n";
        }
        if (guess < secret_number) {
            cout << "Слишком мало!\n\n";
        }
        else {
            cout << "\nВот и всё, у тебя ушло " << tries << " попыток!\n";
        }
    } while(guess != secret_number);
    return 0;
}