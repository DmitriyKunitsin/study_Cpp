#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    //запускаю генератор рандомных чисел
    int random_number = rand(); // генерируется рндомное число
    int die = (random_number % 6) + 1; // получаю число от 1 до 6
    cout << "You rolled a " << die << endl;
    return 0;
}