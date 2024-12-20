﻿// Team_Z.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include "x64/Headers/Header.cpp"
using namespace std;


string message = "You have 5 tries to get the word";

int main() {
    system("color 9");
    int choice, choice2, choice3;
    bool flag = false, flag2 = false, flag3 = false, flag4 = false, flag5 = false,flag6 = false;
    do {
        displayMenu();
        cout << "\t\t\t\t\t\t\t\tYou pick: ";
        cin >> choice;

        //Message for options
        switch (choice) {
        case 1: flag = true; break;
        case 2: flag2 = true; break;
        default: cout << "Invalid option. Please try again.\n";
        }

    } while (choice != 1 and choice != 2 and choice != 3);

    // Help menu
    if (flag2 == true and flag == false) {
        cout << "How to play hangman:" << endl;
        cout << "Hangman is a word based game that makes you try to guess a hidden word, chosen randomly from the word generator." << endl;
        cout << "There are 3 difficulties which vary from easy to medium to hard" << endl;
        cout << "Easy = You get 6 lives to guess the 4 letter word" << endl;
        cout << "Medium = You get 5 lives to guess the six letter word" << endl;
        cout << "Hard = You get 3 lives to guess the eight letter word" << endl;
        cout << "Enjoy the game! " << endl;

        //Do you want to still want to play menu
        do {
            cout << "\t\t\t\t\t\t\t\t-----------------------\n";
            cout << "\t\t\t\t\t\t\t\tWant to play? " << endl;
            cout << "\t\t\t\t\t\t\t\t1| Start " << endl;
            cout << "\t\t\t\t\t\t\t\t2| Quit " << endl;
            cout << "\t\t\t\t\t\t\t\t-----------------------\n";
            cout << "\t\t\t\t\t\t\t\tYou pick: ";
            cin >> choice2;
            switch (choice2)
            {
            case 1: flag = true; break;
            case 2: return 0; break;
            default: return 0;
            }
        } while (choice2 != 1 and choice2 != 2);
    }

    // Difficulty selection
    if (flag == true)
    {
        cout << "\t\t\t\t\t\t\t\t-----------------------\n";
        cout << "\t\t\t\t\t\t\t\tMenu:\n";
        cout << "\t\t\t\t\t\t\t\t1: Easy\n";
        cout << "\t\t\t\t\t\t\t\t2: Medium\n";
        cout << "\t\t\t\t\t\t\t\t3: Hard\n";
        cout << "\t\t\t\t\t\t\t\t-----------------------\n";
        cout << "\t\t\t\t\t\t\t\tYou pick: ";
        cin >> choice3;
        switch (choice3)
        {
        case 1: flag4 = true; break;
        case 2: flag5 = true; break;
        case 3: flag6 = true; break;
        default: cout << "\t\t\t\t\t\t\t\tPlease pick a valid option.\n";
        }
    }
    //Easy mode
    if (flag4 == true)
    {
        message = "You have 7 tries to get the word";
        int tries = 7;

        char letter;
        //The Words that can be chosen for easy mode
        string word;
        string words[] = { "pizza", "juicy", "apple", "brick", "zebra", "queen", "horse", "dance", "charm", "ideal", "cycle", "grape", "space", "table", "value", "water", "candy", "drive", "glove",
"human", "humor", "dying", "lover", "berry", "greed", "grass", "judge" };
        //Randomizing the word
        srand(time(NULL));
        int word_Num = rand() % 27;
        word = words[word_Num];
        //Hiding the word
        string hide_word(word.length(), '_');

        system("cls");

        //Checks if you still have more that 0 tries
        while (tries != 0)
        {
            hang_man('n');
            cout << "\t\t\t\t\t\t\t\tLife: " << tries << endl;
            cout << "\t\t\t\t\t\t\t\t" << hide_word << endl;
            cout << "\t\t\t\t\t\t\t\tGuess a letter: ";
            cin >> letter;

            system("cls");
            if (checkGuess(letter, word, hide_word) == 0)
            {
                message = "You got it incorrect";
                tries--;
            }
            else
            {
                message = "Good job, keep going!";
            }
            if (hide_word == word)
            {
                message = "You got it!";
                hang_man('f');
                cout << "\t\t\t\t\t\t\t\tLife: " << tries << endl;
                cout << "\t\t\t\t\t\t\t\tThe word is: " << word << endl;
                break;
            }
        }
        if (tries == 0)
        {
            message = "You are Hanged!";
            hang_man('h');
            cout << "\t\t\t\t\t\t\t\tLife: " << tries << endl;
            cout << "\t\t\t\t\t\t\t\tThe word is: " << word << endl;
        }


        }
    //Medium mode
    if (flag5 == true)
    {
        int tries = 5;
        
        char letter;
        //The Words that can be chosen dor medium mode
        string word;
        string words[] = { "absorb", "action", "banner", "banana", "circle", "clover", "doctor", "аbroad", "casual", "couple", "anyway", "corner", "desire", "appeal", "costly", "detail", "appear", "county", "detect",
"beyond", "budget",	"device", "faster", "fourty", "poppy", "packed", "pacify" };
        //Randomizing the word
        srand(time(NULL));
        int word_Num = rand() % 27;
        word = words[word_Num];
        //Hiding the word
        string hide_word(word.length(), '_');

        system("cls");

        //Checks if you still have more that 0 tries
        while (tries != 0)
        {
            hang_man('n');
            cout << "\t\t\t\t\t\t\t\tLife: " << tries << endl;
            cout << "\t\t\t\t\t\t\t\t" << hide_word << endl;
            cout << "\t\t\t\t\t\t\t\tGuess a letter: ";
            cin >> letter;

            system("cls");

            if (checkGuess(letter, word, hide_word) == 0)
            {
                message = "You got it incorrect";
                tries--;
            }
            else
            {
                message = "Good job, keep going!";
            }
            if (hide_word == word)
            {
                message = "You got it!";
                hang_man('f');
                cout << "\t\t\t\t\t\t\t\tLife: " << tries << endl;
                cout << "\t\t\t\t\t\t\t\tThe word is: " << word << endl;
                break;
            }
        }
        if (tries == 0)
        {
            message = "You are Hanged!";
            hang_man('h');
            cout << "\t\t\t\t\t\t\t\tLife: " << tries << endl;
            cout << "\t\t\t\t\t\t\t\tThe word is: " << word << endl;
        }
    }

    //Hard Mode
    if (flag6 == true)
    {
        message = "You have 3 tries to get the word";
        int tries = 3;
        //The Words that can be chosen for hard mode
        char letter;
        string word;
        string words[] = { "academic", "blending", "colorful", "database", "elevator","familiar", "generate", "harmony", "imagine", "junction","keyboard", "landmark", "magnetic", "narrator", "operator",
            "peaceful", "question", "resource", "shelters", "terminal","universe", "valuable", "wellness", "xenolith", "yearning","zealous", "tranquil", "optimist" };
        //Randomizing the word
        srand(time(NULL));
        int word_Num = rand() % 27;
        word = words[word_Num];
        //Hiding the word
        string hide_word(word.length(), '_');

        system("cls");

        //Checks if you still have more that 0 tries
        while (tries != 0)
        {
            hang_man('n');
            cout << "\t\t\t\t\t\t\t\tLife: " << tries << endl;
            cout << "\t\t\t\t\t\t\t\t" << hide_word << endl;
            cout << "\t\t\t\t\t\t\t\tGuess a letter: ";
            cin >> letter;

            system("cls");

            if (checkGuess(letter, word, hide_word) == 0)
            {
                message = "You got it incorrect";
                tries--;
            }
            else
            {
                message = "Good job, keep going!";
            }
            if (hide_word == word)
            {
                message = "You got it!";
                hang_man('f');
                cout << "\t\t\t\t\t\t\t\tLife: " << tries << endl;
                cout << "\t\t\t\t\t\t\t\tThe word is: " << word << endl;
                break;
            }
        }


        if (tries == 0)
        {
            message = "You are Hanged!";
            hang_man('h');
            cout << "\t\t\t\t\t\t\t\tLife: " << tries << endl;
            cout << "\t\t\t\t\t\t\t\tThe word is: " << word << endl;
        }


    }
    return 0;
}


