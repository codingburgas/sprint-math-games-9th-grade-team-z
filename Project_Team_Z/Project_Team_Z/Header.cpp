#include "Header.hpp"

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
int checkGuess(char guess, string real_word, string& hidden_word)
{
    int matches = 0;
    int len = real_word.length();
    for (int i = 0; i < len; i++) {
        if (guess == hidden_word[i])
        {
            return 0;
        }
        if (guess == real_word[i])
        {
            hidden_word[i] = guess;
            matches++;
        }
    }
    return matches;
}

void hang_man(char state) {
    string head_string = "|";
    string stage = "=";
    string lever = "|";
    if (state == 'f')
    {
        head_string = " ";
    }
    if (state == 'h')
    {
        stage = " ";
        lever = "/";
    }
    cout << "\t\t\t\t_________________" << endl;
    cout << "\t\t\t\t       " << head_string << "        |" << endl;
    cout << "\t\t\t\t       O        |" << endl;
    cout << "\t\t\t\t      / \\       |" << "\t     " << message << endl;
    cout << "\t\t\t\t       |        |" << "\t     /" << endl;
    cout << "\t\t\t\t      / \\       |           O  " << endl;
    cout << "\t\t\t\t  ===" << stage << stage << stage << stage << stage << "===   |   " << lever << lever << "     / \\" << endl;
    cout << "\t\t\t\t   |       |    |  ====     |" << endl;
    cout << "\t\t\t\t   |       |    |  ||||    / \\" << endl;
    cout << "\t\t\t\t=================================" << endl;
}
