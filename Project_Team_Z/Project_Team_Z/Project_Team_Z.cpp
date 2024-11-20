#include <iostream>
#include <ctime>
using namespace std;

//Functions for showing ASCII for menu
void displayMenu() {
    // ASCII
    cout << "\t\t\t\t _     _   _____   _     _   _____    __   __    _____   _     _ " << endl;
    cout << "\t\t\t\t(_)   (_) (_____) (_)   (_) (_____)  (__)_(__)  (_____) (_)   (_)" << endl;
    cout << "\t\t\t\t(_)___(_)(_)___(_)(__)_ (_)(_)  ___ (_) (_) (_)(_)___(_)(__)_ (_)" << endl;
    cout << "\t\t\t\t(_______)(_______)(_)(_)(_)(_) (___)(_) (_) (_)(_______)(_)(_)(_)" << endl;
    cout << "\t\t\t\t(_)   (_)(_)   (_)(_)  (__)(_)___(_)(_)     (_)(_)   (_)(_)  (__)" << endl;
    cout << "\t\t\t\t(_)   (_)(_)   (_)(_)   (_) (_____) (_)     (_)(_)   (_)(_)   (_)" << endl;
    cout << "\t\t\t\t                                                                   " << endl;

    //Options for the menu
    cout << "\t\t\t\t\t\t-----------------------\n";
    cout << "\t\t\t\t\t\tMenu:\n";
    cout << "\t\t\t\t\t\t1: Play Game\n";
    cout << "\t\t\t\t\t\t2: Help/How to Play\n";
    cout << "\t\t\t\t\t\t3: Quit\n";
    cout << "\t\t\t\t\t\t-----------------------\n";
}

int main() {
    int choice;
    bool flag = false;
    do {
        displayMenu();
        cout << "\t\t\t\t\t\tYou pick: ";
        cin >> choice;

        //Message for options
        switch (choice) {
        case 1: flag = true;
        case 2: cout << "Help/How to Play selected.\n"; break;
        case 3: cout << "Goodbye!\n"; break;
        default: cout << "Invalid option. Please try again.\n";
        }
    } while (choice != 1 and choice != 2 and choice != 3);
    if (flag == true)
    {
        //The Words that can be chosen
        char letter;
        string word;
        string words[] = { "absorb", "action", "banner", "banana", "circle", "clover", "doctor", "àbroad", "casual", "couple", "anyway", "corner", "desire", "appeal", "costly", "detail", "appear", "county", "detect",
"beyond", "budget",	"device", "faster", "fourty", "poppy", "packed", "pacify" };
        //Randomizing the word
        srand(time(NULL));
        int word_Num = rand() % 27;
        word = words[word_Num];
        //Hiding the word
        string hide_word(word.length(), '_');

    return 0;
}
