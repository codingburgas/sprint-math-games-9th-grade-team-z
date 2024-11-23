#include <iostream>
#include <ctime>
using namespace std;

int tries = 5;
string message = "You have 5 tries to get the word";
void hang_man(char);
int checkGuess(char, string, string&);
void sentice(char);
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
    int choice2;
    bool flag = false;
    bool flag2 = false;
    do {
        displayMenu();
        cout << "\t\t\t\t\t\tYou pick: ";
        cin >> choice;

        //Message for options
        switch (choice) {
        case 1: flag = true; break;
        case 2: flag2 = true; break;
        case 3: cout << "Goodbye!\n"; break;
        default: cout << "Invalid option. Please try again.\n";
        }
    } while (choice != 1 and choice != 2 and choice != 3);

    //How to play hangman
    if (flag2 == true and flag == false) {
        cout << "How to play hangman:" << endl;
        cout << "Hangman is a word based game that makes you try to guess a hidden word, chosen randomly from the word generator." << endl;
        cout << "There are 3 difficulties which vary from easy to medium to hard" << endl;
        cout << "Easy = You get 6 lives to guess the 4 letter word" << endl;
        cout << "Medium = You get 5 lives to guess the six letter word" << endl;
        cout << "Hard = You get 3 lives to guess the eight letter word" << endl;
        cout << "Enjoy the game! 🎉" << endl;

        //add return menu
        do {
            cout << "\t\t\t\t\t\t-----------------------\n";
            cout << "\t\t\t\t\t\tWant to play? " << endl;
            cout << "\t\t\t\t\t\t1| Start " << endl;
            cout << "\t\t\t\t\t\t2| Quit " << endl;
            cout << "\t\t\t\t\t\t-----------------------\n";
            cout << "\t\t\t\t\t\tYou pick: ";
            cin >> choice2;
            switch (choice2)
            {
            case 1: flag = true; break;
            case 2: return 0; break;
            default: cout << "Please pick a valid option.\n";
            }
        } while (choice2 != 1);

    }
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
        system("cls");
        //Checks if tries equals to zero
        while (tries != 0)
        {
            //sets up the hidden word
            hang_man('n');
            cout << "\t\t\t\tLife: " << tries << endl;
            cout << "\t\t\t\t" << hide_word << endl;
            cout << "\t\t\t\tGuess a letter: ";
            cin >> letter;

            system("cls");
            //checks if the guess is wrong
            if (checkGuess(letter, word, hide_word) == 0)
            {
                message = "You got it incorrect";
                tries--;
            }
            else
            {
                message = "Good job, keep going!";
            }
            //checks if the word is guessed
            if (hide_word == word)
            {
                message = "You got it!";
                hang_man('f');
                cout << "\t\t\t\tLife: " << tries << endl;
                cout << "\t\t\t\tThe word is: " << word << endl;
                break;
            }
        }
        if (tries == 0)
        {
            message = "You got Hanged!";
            hang_man('h');
            cout << "\t\t\t\tLife: " << tries << endl;
            cout << "\t\t\t\tThe month is: " << word << endl;
        }

        return 0;
    }
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

void(hang_man(char state)) {
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