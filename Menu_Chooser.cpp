#include <iostream>

using namespace std;

int main() {
    cout << "Сложность уровня\n\n";
    cout << "1 - Легкий\n";
    cout << "2 - Средний\n";
    cout << "3 - Сложный\n";
    int choice;
    cout << "Введите ваш выбор : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Вы выбрали легкий уровень\n";
        break;
    case 2:
        cout << "Вы выбрали средний уровень сложности\n";
        break;
    case 3:
        cout << "Вы выбрали сложный уровень сложности\n";
        break;
    default:
        cout << "Выберите уровень сложности от 1 до 3\n";
        break;
    }
    return 0;
}