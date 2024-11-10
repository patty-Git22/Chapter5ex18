/*
Title: Chapter 5 exercise 18: Population Bar Chart
File name; Chapter5ex18.cpp
Programmer: Patrick Maloon
Date: 11/9

Requirements:
Write a program that produces a bar chart showing the population growth of Prairieville,
a small town in the Midwest, at 20-year intervals during the past 100 years.
The program should read in the population figures (rounded to the nearest 1,000 people) for
1900, 1920, 1940, 1960, 1980, and 2000 from a file. For each year, it should display the date
and a bar consisting of one asterisk for each 1,000 people.
*/

#include <iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream inputFile;
	int asterisks,
		year,
		number;


	cout << "Population Growth of Prairieville with each * representing 1,000 people.\n";

	inputFile.open("People.txt");
	if (!inputFile)
	{
		cout << "Error! Cannot open file.\n";
	}

	while (inputFile >> year >> number)
	{
		cout << year << " ";
		asterisks = number / 1000;
		for (int i = 0; i < asterisks; i++)
			cout << "*";
		cout << endl;
	}

	inputFile.close();
	
	return 0;
}

