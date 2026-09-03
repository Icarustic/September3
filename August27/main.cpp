//The pink pony club karaoke program

#include <iostream>
#include<string> //string of characters 
#include<Windows.h> //there is "function" that allows for a "pause" capability


using namespace std; 

int main()
{
    //print the lyrics with appropriate time delays
    cout << "I "; 
    int time = 1'000; //an integer is a "data type" (a type of data)
    float PI = 3.14; 

    //another example of an EXTREMELY commonly-occurring data type: 
    string songName = "Pink pony club"; 


    cout << "\033[38;5;201m";

    Sleep(time); //unit milliseconds (ms) -> not seconds or hours, etc. 
    cout << "know ";

    cout << "\033[0m";

    time = 5'000; //update variable's value to 5 seconds

    Sleep(time); //this is a "function call" 
    cout << "you ";    
    Sleep(3'000);
    cout << "wanted ";



    //\n

    //std::cout << "My name is Roderick Walker\n\n\n"; //this is a "comment" 
    //std::cout << "My name is Jaleah McIntosh\n"; //Jaleah McIntosh wrote this
    //std::cout << "My name is Seth Norman\n"; //Seth Norman wrote this
    //std::cout << "My name is Taylor Prouty\n"; //Taylor Prouty wrote this
    //std::cout << "My name is Reuben Iria-Anenih\n";// Reuben Iria-Anenih wrote this
    //std::cout << "My name is Sameer Kham\n"; //Sameer Khan wrote this
    //std::cout << "My name is Daniel Walden\n"; //Daniel Walden wrote this
    //std::cout << "My name is Tim Jacques\n"; //Tim Jacques wrote this
    //std::cout << " my name is luis hernandez\n";// luis hernadez wrote this
    //std::cout << "My name is Jailen Jackson\n"; //Jailen Jackson wrote this            
    //std::cout << "My name is Quan Phan\n"; // Quan Phan wrote this?
    //std::cout << "My name is Jerardo Rodriguez\n"; // Jerardo Rodriguez wrote this
    //std::cout << "My name is Daigo Hirata\n"; //Daigo Hirata wrote this
    //std::cout << "my name is cordaveon lewis\n";// cordaveon lewis wrote this 
    //std::cout << "My name is Ima\n"; //Imanol Rojas wrote this
    //std::cout << "My name is Juan Martinez"; //Juan Martinez wrote this. Maybe
    //std::cout << "My name is Evan Cockrell";
    //std::cout << "my name is John Grimes"; // john grimes wrote this. bubba
    //std::cout << "My name is Quincy Taylor"; //Quincy Taylor wrote this
    //return 0;




    return 0; 
}