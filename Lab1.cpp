// Brandon Steege
// Lab1.cpp
// COSC 2030
// 9/20/18

#include <iostream>
#include <fstream>
#include <string>

using std::ifstream;
using std::string;
using std::cout;
using std::cin;
using std::endl;


int main()
{
	//initializing variables
	ifstream inFile;
	string fileName;
	int count(0);
	double first;
	double second;
	double secondToLast(0);
	double last(0);
	double x(0);

	//prompting user to enter a file name
	cout << "Please enter a file name: " << endl;
	cin >> fileName;
	inFile.open(fileName);

	//if the file name does not exist or was typed incorrectly re-prompting the user to enter a new filename
	while (!inFile)
	{
		cout << "No such file exists! Please enter a file name: " << endl;
		cin >> fileName;
		inFile.open(fileName);
	}

	//Setting the first and second variables to the first and second numbers in the file/incremeting the total count
	inFile >> first;
	count++;
	inFile >> second;
	count++;

	//while not end of file
	while (!inFile.eof())
	{
		
		inFile >> last; //sets the current line to last
		if (!inFile.fail()) //controls the read procces
		{
			count++; //increments count
			secondToLast = x; 
			x = last;
		}


	}

	inFile.close(); //closes file

	// prints out the results to the user
	cout << "\nFirst Number: " << first << endl << "Second Number: " << second << endl << "Second to Last Number: " << secondToLast << endl << "Last Number: " << last << endl << "Total Count: " << count << endl;

	system("pause");

	return 0;
}

