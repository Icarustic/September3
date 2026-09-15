#include<cmath> // This is a library that allows you to use math functions like pow(), sin(), cos(), etc.
#include<iostream> 
#include<string>
#include<algorithm>
#include<iomanip>
// We are going to write to an Output file here. Saving our results to a file.
#include<fstream> // f stands for file.
#include<iostream> // io stands for input/output.

void demoGetline()
{
}

using namespace std;

int main()
{

    ifstream fin("lyrics.txt");
    if (fin.is_open() == false) //if the file was not found or opened
    {
        cout << "File was not found\n";
        return -1; // early return
    }
    cout << "File was found\n";

    for (int i = 1; i <= 10; ++i) //Counts from 1-10 incremently
    {
        string line;
        getline(fin, line);
        cout << line << endl;
    }
}