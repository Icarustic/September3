#include<iostream> 
#include<cmath>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std; //not a good idea for PROFESSIONAL C++

void demoPrintingUnicodeCharacters()
{
	system("chcp 65001");
	std::locale::global(std::locale("")); // Set locale for proper Unicode handling

	for (char32_t currentChar = 0x0000; currentChar <= 0x10FFFF; ++currentChar)
	{
		//if (currentChar < 0xD800 || currentChar > 0xDFFF) // Skip surrogate pairs
		//{
		std::wcout << static_cast<wchar_t>(currentChar) << ' ';
		//}
	}

	std::wcout << std::endl;
}

int main()
{

	//int Count = 0;
	//int Score = 0;
	//Count = Count + 1;
	//Score = Score + 1;
	//cout << "Count: " << Count << "\n";
	//cout << "Score: " << Score << "\n";

	////Concatenate Example
	//string x = "10";
	//cout << typeid(x).name() << "\n";
	////Concatenate, a built in feature allowing you to + two strings
	//string firstWord = "12"; //niche+

	//string secondWord = "34";

	//cout << "The concatenation of " << firstWord << " and " << secondWord << " is: " << firstWord + secondWord << "\n";
	////Result: 1234 or betaalpha, it combines them but does not add them together.

	//x = (stoi(x) + 1); // does not work since it will not allow you to alter a string using integers
	//cout << (stoi(x) + 1);
	//angstromsPerMeter = pow(10, 10);
	////cout << angstromsPerMeter;

	//long long int angstromsPerMeter; // replace int -> long long int 
	//angstromsPerMeter = pow(10, 10);
	//cout << angstromsPerMeter; // fails due to overfloow instead use long long data type instead

	string Name_1 = "Evan Cokrell";
	string Name_2 = "Roderick Walker";
	int result = Name_1.length() - count(Name_1.begin(), Name_1.end(), ' '); // this correctly removes spaces from the count
	cout << result << "\n";
	int result2 = Name_2.length() - count(Name_2.begin(), Name_2.end(), ' '); // this correctly removes spaces from the count
	cout << result2 << "\n";

	//TotalCostProgram
	cout << setprecision(6);

	float TotalCost;
	float Product_1_Price;
	float Product_2_Price;
	float Product_3_Price;


	//getline()

	while (true)
	{
		cout << "\nWhat is the price of Product 1 (MUST be an integer)?\n";
		cin >> Product_1_Price;

		//if (cin.fail())
		//{
		//	cin.clear(); 
		//}


		cout << "What is the price of Product 2?\n";
		cin >> Product_2_Price;
		cout << "What is the price of Product 3?\n";
		cin >> Product_3_Price;

		TotalCost = Product_1_Price + Product_2_Price + Product_3_Price;
		cout << TotalCost;

	}


	
}