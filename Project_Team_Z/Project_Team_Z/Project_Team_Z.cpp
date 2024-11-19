#include <iostream>
using namespace std;

// Функция за показване на ASCII и менюто
void displayMenu() {
    // ASCII
    cout << "\t\t\t\t _     _   _____   _     _   _____    __   __    _____   _     _ " << endl;
    cout << "\t\t\t\t(_)   (_) (_____) (_)   (_) (_____)  (__)_(__)  (_____) (_)   (_)" << endl;
    cout << "\t\t\t\t(_)___(_)(_)___(_)(__)_ (_)(_)  ___ (_) (_) (_)(_)___(_)(__)_ (_)" << endl;
    cout << "\t\t\t\t(_______)(_______)(_)(_)(_)(_) (___)(_) (_) (_)(_______)(_)(_)(_)" << endl;
    cout << "\t\t\t\t(_)   (_)(_)   (_)(_)  (__)(_)___(_)(_)     (_)(_)   (_)(_)  (__)" << endl;
    cout << "\t\t\t\t(_)   (_)(_)   (_)(_)   (_) (_____) (_)     (_)(_)   (_)(_)   (_)" << endl;
    cout << "\t\t\t\t                                                                   " << endl;

    //Опции на менюто
    cout << "\t\t\t\t\t\t-----------------------\n";
    cout << "\t\t\t\t\t\tMenu:\n";
    cout << "\t\t\t\t\t\t1: Play Game\n";
    cout << "\t\t\t\t\t\t2: Help/How to Play\n";
    cout << "\t\t\t\t\t\t3: Quit\n";
    cout << "\t\t\t\t\t\t-----------------------\n";
}

int main() {
    int choice;
    do {
        displayMenu();
        cout << "\t\t\t\t\t\tYou pick: ";
        cin >> choice;

        // Съобщение за опции
        switch (choice) {
        case 1: cout << "Play Game\n"; break;
        case 2: cout << "Help/How to Play selected.\n"; break;
        case 3: cout << "Goodbye!\n"; break;
        default: cout << "Invalid option. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}