#include<cmath> // This is a library that allows you to use math functions like pow(), sin(), cos(), etc.
#include<iostream> 
#include<string>
#include<algorithm>
#include<iomanip>
//#include <windows.h>
#include <io.h> // This is a library that allows you to use functions like _setmode() and _fileno() to change the output mode of the console.
#include <fcntl.h> // This is a library that allows you to use functions like _O_U16TEXT to set the output mode of the console to Unicode.
using namespace std; //not a good idea for PROFESSIONAL C++

void demoGettingUserInput()  //return type, 
{
}

void demoRNG() // Being Modular with your code, breaks the code into peices so its simplified, called functions.
{
	srand(time(0)); // "Seeding" the random number generator, leave abstract but it basicly helps generate a new random number each time it runs.
	int maxPossibleDiceValue = 10;
	while (true) //intentional infinite loop
	{
		cout << "A random number: " << rand() % maxPossibleDiceValue << "\n"; //Why do we mod the rand by the int? It applies a wrap around when dividing so the results remain withen the given max from (0,Max-1)
		//cout << "A random number: " << rand() << "\n"; //rand() seems to result in a random number between 0 - 32767. //(Why is it only resulting in the same number each time? ,answer, it requires seeding)
	}
}

int sqaureTheInput(int theInput) //parenthesesis (pl), parenthesis (sing.)? //Is another type of function
{
	return pow(theInput, 2); //the variable "theInput" is only locally available inside of the function.
}

int main()
{
    ////---YenSymbolPrinting---
    //int returnValue = _setmode(_fileno(stdout), _O_U16TEXT);
    //wcout << L"Yen sign: \u00A5" << endl; // Prints the yen symbol, can be changed by simply replacing the unicode value or pasting the symbol
    //_setmode(_fileno(stdout), returnValue); // Must revert the setmode once you print the unicode symbol to prevent errors

    //_setmode()
    //return 0;

    //SetConsoleOutputCP(65001);
    //cout << "Yen sign: \u00A5" << endl;
    //return 0;
    
	////---MaxPossibleDiceValue Mod Explanation---
	////black box (abstraction) - you don't need to know how the function works, just that it works and what it does.
	//
	//std::cout << RAND_MAX << "\n"; //prints max rand value
	//int number = 5; 
	//number = number + 1; 
	//number++; // number = equal 7

	//for (int i = 1; i <= 10; ++i) //creates a counter that increases incrementally, and is only possible for a for loop.
	//{
	//	cout << "i is: " << i << " and number MOD i is: " << i % number << "\n"; // this creates a counter starting at 1, and counting up till 10, while modding each value to show how the division leads to repeating pattern.
	//}
	//int i = 1; 
	//while (i <= 10) //this shows the same counter loop but using a while loop instead of a for loop.
	//{
	//	//cout << rand() << "\n";
	//	++i; //niche
	//}
	//string userInput = "continue";

	//while (userInput != "quit")
	//{
	//}

	////---Graphing x^2---
	//int x;
	//cout << "Set the value of x for x^2: \n";
	//cin >> x;
	//int theInputSqaured = sqaureTheInput(x); // It gives the function a value of 5 to square, and then the rest of the code completes the power.
	//cout << "The input squared is: " << theInputSqaured << "\n";
	////demoRNG; // Calling your function
	//int result = pow(5, 2); //pow means raise to the power of. The first value is the base and the second is the exponent.
	//int otherresult = pow(2, 5);
	//cout << "pow(5,2) is: " << result << "\n";
	//cout << "pow(2,5) is: " << otherresult << "\n";

	//cout << 5 / 2; // Divides
	//cout << 5 * 2; // Multiplies
	//cout << 5 % 2; // The "Mod" operator, returns remainder



	//int Count = 0;
	//int Score = 0;
	//Count = Count + 1;
	//Score = Score + 1;
	//cout << "Count: " << Count << "\n";
	//cout << "Score: " << Score << "\n";

	////---Concatenate Example---
	//string x = "10";
	//cout << typeid(x).name() << "\n";
	////Concatenate, a built in feature allowing you to + two strings
	//string firstWord = "12"; //niche+

	//string secondWord = "34";

	//cout << "The concatenation of " << firstWord << " and " << secondWord << " is: " << firstWord + secondWord << "\n";
	////Result: 1234 or betaalpha, it combines them but does not add them together.

	//x = (stoi(x) + 1); // does not work since it will not allow you to alter a string using integers
	//cout << (stoi(x) + 1);
    
    //return 0;
}
