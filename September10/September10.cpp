#include<cmath> 
#include<iostream> 
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    //---Stoplight_If_Expression---
    string currentLightColor;
    currentLightColor = "green";
    if (currentLightColor == "green" or currentLightColor == "Green") // a = assigns, a == checks if equivalant.
    {
        cout << "Continue Forward\n";
    }
    else if (currentLightColor == "yellow" or currentLightColor == "Yellow") //Cant do Varaible == "y" or "Y" in C++
    {
        cout << "Slow Down\n";
    }
    else // do not include a expression but can include a comment to clarify.
    {
        cout << "Stop\n";
    }

    //---BooleanExpression---
    bool isLightGreen = false; //declaring a boolean variable, a data type that can use true or false. explicit = clear, implicit = unclear.
    if (isLightGreen) //expression
    {
        cout << "Continue Forward\n";
    }
    else
    {
        cout << "Stop\n";
    }
    //cout << "Hello World!\n";

}