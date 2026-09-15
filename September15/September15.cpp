#include<cmath> // This is a library that allows you to use math functions like pow(), sin(), cos(), etc.
#include<iostream> 
#include<string>
#include<algorithm>
#include<iomanip>

using namespace std;
// We are going to write to an Output file here. Saving our results to a file.
#include<fstream> // f stands for file.
#include<iostream> // io stands for input/output.

//using namespace std;

int main()
{
    unsigned int a = -123; 
    cout << a << "\n";


    ofstream fout("SomeText.txt"); //output file fout(filename) //the .txt is a file extension.

    //Loop memory error
    //while (true)
    //{
    //    fout << "a\n";
    //}

    fout << "asdasdf\n";
    fout << "This is the second line of output written to the file\n";

    fout.close();

    ofstream outputData;

    outputData.open("outputFile.txt");

    outputData << "Hello world" << endl;

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
    string secondLineOfFile;
    getline(fin, firstLineOfFile); //Similar to how we used it before but translated from getline(cin, variable);
    getline(fin, secondLineOfFile);
    cout << "Does this line get printed if the input file is opened\n"; //A safety check
    cout << firstLineOfFile << "\n"; //prints to terminal to verify
    cout << secondLineOfFile << "\n"; //Works properly

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

  //cin.ignore();
  char ch;
  //cin.get(ch);
  //cout << "Here: " << ch;

  //string username;
  //cout << "Enter your name: " << endl;
  //cin.ignore(3);
  //cin >> username;
  //cout << username;

  const double eulerNumber = 2.71828;
  //cout << fixed;
  //cout << setprecision(2);
  //cout << eulerNumber;

  double minimumEarthTiltAngle = 22.1; // degrees

  double currentTropicOfCancerLattitude = 23.44; //also degrees
  //cout << fixed;
  //cout << setprecision(1);
  //cout << currentTropicOfCancerLattitude - minimumEarthTiltAngle << endl;

//  int number;
//  cout << "Enter a number: " << endl;
//  cin >> number;
//  cout << "You entered: " << number << endl;
////needs a cin.ignore();
//  cin.ignore();
//  string message;
//  cout << "Enter a message: " << endl;
//  getline(cin, message);
//  cout << "You entered: " << message << endl;
//
//  string stringName = "camelCase";
//  string StringName = "PascalCase";

  int leg1, leg2, hypotenuse;
  leg1 = 3;
  leg2 = 4;

  //sqrt(leg1 * leg1 + leg2 * leg2) = hypotenuse;
  //hypotenuse = (leg1 * leg1 + leg2 * leg2);
  //cout << "first" << hypotenuse << endl;
  //hypotenuse = sqrt(hypotenuse);
  //cout << "second" << hypotenuse << endl; //corrected code to properly sqaure root

  string palindrome = "step on no pets";

  //cout << palindrome.length() << endl;

  //cout << "Enter a message: " << endl;
  //string message;

  //cin >> message;
  //cout << "You entered: " << message << endl;

  //float TaxRate = 0.0625;
  //cout << TaxRate;

  //char Letter = 'z';
  //cout << Letter;

  //bool Opened = true;

  //const int Minute = 60;
  //cout << Minute;

  //int Year = 2026;
  //cout << endl;

  ////float 2020taxRate = 0.0625;//numbers must be after _ or letters to not be misread
  //cout << pow(2, 2);
  //cout << endl;
  //cos(2);
  //tolower(1);
  //isdigit(1);
  

}
