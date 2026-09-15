#include<cmath> // This is a library that allows you to use math functions like pow(), sin(), cos(), etc.
#include<iostream> 
#include<string>
#include<algorithm>
#include<iomanip>

using namespace std;
// We are going to write to an Output file here. Saving our results to a file.
#include<fstream> // f stands for file.
#include<iostream> // io stands for input/output.

using namespace std;

int main()
{
    ofstream fout("SomeText.txt"); //output file fout(filename) //the .txt is a file extension.

    //Loop memory error
    //while (true)
    //{
    //    fout << "a\n";
    //}

    //fout << "asdasdf\n";
    //fout << "This is the second line of output written to the file\n";

    fout.close();
    //The output is found through open in file explorer and open the text file in the project.
    //close the file when done writing to it. This is important because if you don't close the file, the data may not be saved properly.
        // file extensions are used by an OS to determine the app used to open the file
        //ex: .jpg files open with windows photo viewer, .mp3 files open with windows media player, .txt files open with notepad, etc.
        // .txt files open with notepad

    //read input from a already existing file:
    ifstream fin("SomeText.txt");

    if (fin.is_open() == false) //if the file was not found or opened
    {
        cout << "file was not found\n";
        return -1; // early return
    }

    string firstLineOfFile;
    getline(fin, firstLineOfFile); //Similar to how we used it before but translated from getline(cin, variable);

    cout << "Does this line get printed if the input file is opened"; //A safety check
    cout << firstLineOfFile << "\n"; //prints to terminal to verify

    fin.close();




    //Input Output Test Code 
      //cout << pow(2, 10);

    string westWind = "Zephyrus";

    string northWind = "Boreas";
    //cout << westWind.length();

    //cout << sqrt("sixty four");
    //cout << sqrt(64);

    string dog = "perro";

    string cat = "gato";

    //cout << length(dog);

    char ch;
    cin.get(ch);
    //cout << "Here: " << ch;
}
