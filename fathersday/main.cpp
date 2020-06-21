// fathersday.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "functions.h"

using namespace std;

int num1 = 0;
int num2 = 0;
char repeat = 'Y';

int main()
{
    //Intro
    std::cout << "Welcome to Punk Band Name Generator!\n";

    while (repeat == 'Y' || repeat == 'y') {   //while loop for repeat generation
        
        //Getting parameters
        std::cout << "Enter a number 1 - 10\n";
        std::cin >> num1;

        std::cout << "Enter another number 1 - 10\n";
        std::cin >> num2;

        //Fake "Generating" loading text, I apologize for disgusting sleep function
        std::cout << "Generating.\n";
        this_thread::sleep_for(chrono::milliseconds(750));
        std::cout << "Generating..\n";
        this_thread::sleep_for(chrono::milliseconds(750));
        std::cout << "Generating...\n";
        this_thread::sleep_for(chrono::milliseconds(750));

        //Band name output
        std::cout << "Your punk band name is: The " << get_adj(num1) << " " << get_noun(num2) << ".\n"; //FINALLY GOT THIS TO WORK!

        //Check if user wants to repeat
        std::cout << "Want to generate another? (y/n)\n";
        std::cin >> repeat;
    }
    
    std::cout << "Thanks for playing, Happy Father's Day! This program will now close.\n"; //If no repeat, output this
    this_thread::sleep_for(chrono::milliseconds(5000)); //Waiting to kill .exe
    
    return 0;
}
