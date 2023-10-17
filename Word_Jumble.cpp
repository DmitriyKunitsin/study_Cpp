#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
 enum fields {WORD, HINT , NUM_FILES};
 const int NUM_WORDS = 5;
 const string WORDS[NUM_WORDS][NUM_FILES] = {
    { "wall", "Do you feel your banging your head against something?"},
    {"glasses", "These might help you see the answer."},
    {"labored", "Going slowly is it?"},
    {"persistent", "Keep at it"},
    {"Jumble", "Its what the game is all about."} 
};
    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    string the_word = WORDS[choice][WORD]; //слово которое нужно угадать
    string the_hint = WORDS[choice][HINT]; //подсказка для слова
    string jumble = the_word; //перемешанный вариант слова
    int lenght = jumble.size();
    for (int i =0; i < lenght; i++) {
        int index1 = (rand() % lenght);
        int index2 = (rand() % lenght);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    } 
    cout << "\t\t\tWelcome to Word Juble!\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter 'hint' for a hint. \n";
    cout << "Enter 'quit' tu quit the game. \n\n";
    cout << "The jumble is: " << jumble;
    string guess;
    cout << "\n\nYour guess: ";
    cin >> guess;
    while ((guess != the_word) && (guess != "quit"))
    {
        if (guess == "hint") {
            cout << the_hint;
        } else {
            cout << "Sorry that not it";
        }
        cout << "\n\nYour guess: ";
        cin >> guess;
    }
    if (guess == the_word) {
        cout << "\nThat it! You guessed it!\n";
    }
    cout << "\nThanks for playing. \n";
    return 0;
}