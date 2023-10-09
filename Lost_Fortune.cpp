#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    string leader;
    cout << "Добро пожаловать в игру Утраченый клад\n" ;
    cout << "Пожалуйста введите следующие данные для вашего приключения\n";
    cout << "Введите цифру :\t";
    cin >> adventurers;
    cout << "Введите значение меньше, чем первое :\t";
    cin >> killed;
    survivors = adventurers - killed;
    cout << "Введи ваше имя :\t";
    cin >> leader;
    // СЮЖЕТ
    cout << "\nВ вашей группа в колличестве " << adventurers << " искателей приключений, выдвинулась на задание";
    cout << " в поисках затерянного клада";
    cout << "\nВ вашей группе есть ваш легендарный мошейник " << leader << "\n";
    cout << "\nПо пути банда огров устроила на вашу группу засаду\n";
    cout << "Все они храбро сражались под командованием " << leader;
    cout << "\nИ вот огры потерпели поражение, но какой ценой\n";
    cout << "Мы потеряли в сражениие " << killed << " членов команды, они погибли";
    cout << " в группе остались только " << survivors << " выжившие";
    cout << "\nГруппа была близка к тому, чтобы оставить всякую надежу";
    cout << "\nНо во время погребения покойных";
    cout << " они наткнулись на зарытое состояние";
    cout << "\nи так автонтюристы разделили " << GOLD_PIECES <<  "золотые пьеса\n";
    cout << leader << " Решил забрать себе остатки " << (GOLD_PIECES % survivors);
    cout << " \nчтобы все было по честному. \n";
    return 0;
}