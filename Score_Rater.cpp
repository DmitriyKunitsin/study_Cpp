#include <iostream>

using namespace std;

int main() {
    if(true) {
        cout << "Это всегда отображается\n\n";
    }
    if(false) {
        cout << "Это никогда не отображается\n\n";
    }
    int score = 1000;
    if(score) {
        cout << "По крайне мере, ты не набрал 0 очков\n\n";
    }
    if (score >= 250) {
        cout << "Твой счет больше 250\n\n";
    }
    if (score >= 500) {
        cout << "Твой счет 500 или больше, отлично\n\n";
        if (score >= 1000) {
            cout << "Твой счет 1000 или больше, превосходно\n";
        }
    }
    return 0;
}