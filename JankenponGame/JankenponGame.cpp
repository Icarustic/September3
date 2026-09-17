// JankenponGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void ReadInLowerCase(string &input) //Turns input string variables into lower case
{
    getline(cin, input);

    for (char& c : input)
    {
        c = tolower(static_cast<unsigned char> (c));
    }
}


int main()
{
    //-------------User1-------------
    cout << "[Rock, Paper, Scissors]\n";
    string User1Choice;
    cout << "User 1 Choice? \n";
    ReadInLowerCase(User1Choice); //It correctly sets the string to the lowercase version meaning it works as a formatter.
    cout << User1Choice << endl;
    
    //-------------Clear-------------
    //system("pause"); //for debugging
    system("cls");

    //-------------User2-------------
    cout << "[Rock, Paper, Scissors]\n";
    string User2Choice;
    while (true)
    {
        cout << "User 2 Choice? \n";
        ReadInLowerCase(User2Choice);
        if (User1Choice == "rock" or User1Choice == "paper" or User1Choice == "scissor" or User1Choice == "scissors")
        {
            ;
        }
        else
        {
           cout << "Invaid Answer: (Rock, Paper, or Scissor)";
        }
        
        cout << User2Choice << endl;
    }

    //-------------Result-------------
    
    cout << "Result: ";
    if (User1Choice == User2Choice)
    {
        cout << "Tie";
    }
    else if (User1Choice == "rock" and User2Choice == "scissors" or User1Choice == "rock" and User2Choice == "scissor" or User1Choice == "scissors" or "scissor" and User2Choice == "paper" or User1Choice == "paper" and User2Choice == "rock")
    {
        cout << "User 1 Wins";
    }
    else if (User2Choice == "rock" and User1Choice == "scissors" or User1Choice == "rock" and User2Choice == "scissor" or User2Choice == "scissors" or "scissor" and User1Choice == "paper" or User2Choice == "paper" and User1Choice == "rock")
    {
        cout << "User 2 Wins";
    }
    else;





}
