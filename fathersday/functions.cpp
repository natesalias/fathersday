#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

string a;
string n; 

std::string get_adj(int num1) //Retrieves adj from a number 1-10. All adjectives courtesy of my 1am brain
{

	switch (num1) {
	case 1 : 
		a = "Dead"; 
		break;
	case 2 : 
		a = "Crusty"; 
		break;
	case 3 : 
		a = "Angry";
		break;
	case 4 : 
		a = "Drunken";
		break;
	case 5 : 
		a = "Sober";
		break;
	case 6 : 
		a = "Rabid";
		break;
	case 7 : 
		a = "Big"; 
		break;
	case 8 : 
		a = "Harcore";
		break;
	case 9 : 
		a = "Loooong";
		break;
	case 10 : 
		a = "Bleeding";
		break;
	default : 
		std::cout << "Invalid first number, silly! You'll get whatever you generated last.\n";
	}
	return string(a);
}

std::string get_noun(int num2) //Retrieves noun from a number 1-10. All nouns courtesy of my 2am brain.
{

	switch (num2) {
	case 1 :
		n = "Milkmen"; 
		break;
	case 2 :
		n = "Bedsheets"; 
		break;
	case 3 :
		n = "Anarchists";
		break;
	case 4 : 
		n = "Commies";
		break;
	case 5 : 
		n = "Presidents";
		break;
	case 6 :
		n = "Frogs";
		break;
	case 7 : 
		n = "Trashmen";
		break;
	case 8 : 
		n = "People";
		break;
	case 9 : 
		n = "Pawns";
		break;
	case 10 :
		n = "Socialists";
		break;
	default :
		std::cout << "Invalid second number, silly! You'll get whatever you generated last.\n";
	}
		return string(n);
	
}
