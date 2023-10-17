#include <iostream>

using namespace std;

int main() {
    cout << "\n\nПодсчет вперед\n";
    for (int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << "\n\nПодсчет назад\n";
    for (int i = 9; i >= 0; i--) {
        cout << i << " ";
    }
    cout << "\n\nПодсчет по пять:\n";
    for (int i = 0; i <= 50; i+=5) {
        cout << i << " ";
    }
    cout << "\n\nПодсчет от нуля:\n";
    int count = 0;
    for (;count < 10;) {
        cout << count << " ";
        ++count;
    }
    cout << "\n\nПодсчет таблицей:\n";
    const int ROWS = 5;
    const int COLUMS = 3;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMS; ++j)
        {
            cout << i << "." << j << " ";
        }
        cout << endl;
    }
    return 0;
}