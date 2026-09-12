#include<cmath> // This is a library that allows you to use math functions like pow(), sin(), cos(), etc.
#include<iostream> 
#include<string>
#include<algorithm>
#include<iomanip>
//#include <windows.h>
#include <io.h> // This is a library that allows you to use functions like _setmode() and _fileno() to change the output mode of the console.
#include <fcntl.h> // This is a library that allows you to use functions like _O_U16TEXT to set the output mode of the console to Unicode.

using namespace std; 

int main()
{
    //---Input and Output Practice---

    //---UsingPowFunction---
    //int angstromsPerMeter = pow(10, 10);
    //cout << angstromsPerMeter;
    int micrometer;
    micrometer = pow(10, 6);
    cout << "Micrometer: " << micrometer << "\n";
    long long int angstromsPerMeter; // replace int -> long long int 
    angstromsPerMeter = pow(10, 10);
    cout << "Angstrom: " << angstromsPerMeter << "\n"; // fails due to overfloow instead use long long data type instead

    cout << "\n"; //Spacer
    //---String Length Example---
    string Name_1 = "Evan Cokrell";
    string Name_2 = "Roderick Walker";
    int result = Name_1.length() - count(Name_1.begin(), Name_1.end(), ' '); // this correctly removes spaces from the count
    cout << "Name 1 Lenght: " << result << "\n";
    int result2 = Name_2.length() - count(Name_2.begin(), Name_2.end(), ' '); // this correctly removes spaces from the count
    cout << "Name 2 Lenght: " << result2 << "\n";

    //---TotalCostProgram---
    cout << fixed << setprecision(2); // This is how to use setprecision, which allows you to set the degree of precision for decimals and whole numbers. With 2 meaning 00.00 anything larger or smaller is rounded to the nearest 2 decimal places.
    // Specifically set fixed so it keeps all values to the degree of values you set, basicly makes sure the result has decimal points.
    float TotalCost;
    float Product_1_Price; //Use float instead of int so it can store the decimels representing cents
    float Product_2_Price;
    float Product_3_Price;
    //getline()
    //while (true) // For testing the code repeatedly
    //{
    cout << "\nWhat is the price of Product 1?\n";
    //cin >> Product_1_Price;
    Product_1_Price = 19.16; // Sani Cloth 
    cout << "Product 1 Price: $" << Product_1_Price << "\n";
    cout << "What is the price of Product 2?\n";
    //cin >> Product_2_Price;
    Product_2_Price = 98.24; // Clean Good 
    cout << "Product 2 Price: $" << Product_2_Price << "\n";
    cout << "What is the price of Product 3?\n";
    Product_3_Price = 349.99; // Revolution Hydro Clean
    cout << "Product 3 Price: $" << Product_3_Price << "\n";
    //cin >> Product_3_Price;

    //if (cin.fail())
    //{
    //	cin.clear(); 
    //}

    TotalCost = Product_1_Price + Product_2_Price + Product_3_Price;
    cout << "TotalCost: $" << TotalCost; //Excluding tax, this is the total cost of the products.

    //}
}
