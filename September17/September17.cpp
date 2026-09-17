// September17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

namespace Test
{
    int a = 25;
}

int main() // int main(userInput != "quit")
{
    //--Extra--
    cout << "Hello World!\n";
    cout << Test::a << endl; //This is how you use varaibles across namespaces

    if (Test::a > 10 and Test::a < 100) //Checks if a is greater than 10 and less than 100
    {
    
    }

    //--ClassWork--

    int StudentCount = 5;
    int CurrentStudentCount = 1;

    while (CurrentStudentCount <= StudentCount) // <= so it asks for 5 not 4
    {
        //ask for name
        cout << "Enter your Name, student number " << CurrentStudentCount << endl;
        string CurrentStudentName;
        getline(cin, CurrentStudentName);
        cout << "Hello, " << CurrentStudentName << endl;

        CurrentStudentCount = CurrentStudentCount + 1; // ++1 

    }

    cout << "What do you want to do? Options are 1,2,3:\n";
    cout << "1 - Show video of cats\n";
    cout << "2 - Play a song\n";
    cout << "3 - Show a picture of a dog\n";

    int userChoice;
    cin >> userChoice; //using cin for simplicity due to use case
    cout << "you chose option: " << userChoice << endl;

    switch (userChoice) //can only act on integers cant use strings
    {
    case 1: //same as, if (userchoice == 1)
        //open cat vedio file
        system("prayKitty.mp4");
        break; //neccesary for all cases

    case 2: //same as, else if (userchoice == 2)
        //open a music vedio
        system("start https://www.youtube.com/watch?v=mmCnQDUSO4I");
        break;

    case 3:
        //open picture of dog
        system("doris.jpg");
        break;

    //else (catch all other input)
    default:
        cout << "Not an option\n";

    }

    system("pause"); // pauses the screen so we can see the result, then we can press enter to run the next code.
    system("cls"); // clears screen

    string timeOfDay = "night";
    string weatherCondition = "rain";
    int speed = 78;

    if (timeOfDay == "night" or weatherCondition == "rain") //Both must be true, called a compound expression becuase it uses multiple simple expressions
    {
        speed = speed - 5; //It does not mean that a variable is equal to itself, it means that it sets the variable equal to (itself minus 5).
    }
    else
    {
        speed = speed; //Extra not neccesary
    }

    string correctPassword = "123456"; //string so password can include letters aswell
    string guessPassword = "abcdf";

    if (correctPassword != guessPassword) //Incorrect form: if (correctPassword not equal guessPassword), != means not equal //negation operator?
    {
        cout << "Wrong password - Try again\n";
        //getline(cin, guessPassword); //program stops here to ask again for the password until it is correct so it can continue.
    }
    else if (correctPassword == guessPassword)
    {
        cout << "Correct password";
    }
  
    
    bool SeniorCitizenDiscountQualification = false; //bool is a data type, with the allowed values of true and false (1 or 0), named after a mathmatician.

    int age = 65;

    if (age > 55)
    {
        SeniorCitizenDiscountQualification = true;
        cout << "This is one perk of getting older\n";
    }


    int numericalGrade = 89;
    if (numericalGrade >= 90) // >= means greater than or equal too
    {
        cout << "Your Letter Grade is A\n";
    }
    else if (numericalGrade >= 80)
    {
        cout << "Your Letter Grade is B\n";
    }
    else
    {
        cout << "Your Letter Grade is Below B\n";
    }
}

