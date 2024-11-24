#pragma once
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

string message = "You have 5 tries to get the word";
void hang_man(char);
int checkGuess(char, string, string&);
void sentince(char);
//Functions for showing ASCII for menu
