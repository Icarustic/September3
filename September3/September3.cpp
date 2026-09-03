// September3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // int myAge = 38; //unused

    //int hisAge = 19;
    int hisAge;

    //string hisName = "Cordaveon Leweis";
    string hisName;

    //prompt for name

    cout << "What is you name?\n"; //use \n this instead of cin.ignore() to clear the input buffer

	getline(cin, hisName); // allows for spaces in the name, reading the input and storing the variable

    //cin >> hisName; // reading the input and storing the variable

    // prompt for age

	cout << "What is you age," << hisName << "?\n"; //use \n this instead of cin.ignore() to clear the input buffer

	cin >> hisAge; // reading the input and storing the variable

	//cin.fail(); // check if the input is valid

    cout << hisName << " is " << hisAge << " years old.\n"; // prints the string variable containing the name, prints name
}

