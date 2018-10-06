#include <iostream>
#include <string>
using namespace std;

// prototypes
void displayObjectMenu();
string lowerItAll(string nameObject);
bool trueObject(string nameObject, bool acceptObject);
bool trueTemp(string nameObject, float tempObject, bool acceptTemp);

int main()
{
	float tempObject;
	string nameObject;
	bool acceptObject,
		acceptTemp;

	// loops until we have a valid object entered
	do
	{
		// print the menu
		//displayObjectMenu();
		cout << "Today, are we talking about the: cap, cat, cot, or lizard?.\n";
		cin >> nameObject;

		// convert to lowercase
		nameObject = lowerItAll(nameObject);

		// check that it's an acceptable object
		acceptObject = trueObject(nameObject, acceptObject);
	} while (!acceptObject);

		
	// loops until we have a valid temperature for the object
	do
	{
		cout << "\nWhat is the " << nameObject << "'s temperature?\n";
		cin >> tempObject;
		acceptTemp = trueTemp(nameObject, tempObject, acceptTemp);
	} while (!acceptTemp);

	cout << "\nThe temperature of the " << nameObject << " is " << tempObject << "F.\n";

	return 0;
}

/*void displayObjectMenu()
{
	cout << "Today, are we talking about the: cap, cat, cot, or lizard?.\n";
}*/

// function to convert to lowercase, so picky to code!
string lowerItAll(string nameObject)
{
	for (int count = 0; count <= static_cast<int>(nameObject.length()); count ++)
		nameObject[count] = tolower(nameObject[count]);

	return nameObject;
}

bool trueObject(string nameObject, bool acceptObject)
{
	if (nameObject == "cap")
	{
		cout << "\nThe correct temperature range for the cap is 72 to 88 degrees F.";
		acceptObject = true;
	}
	else if (nameObject == "cat")
	{
		cout << "\nThe correct temperature range for the cat is 86 to 102 degrees F.";
		acceptObject = true;
	}
	else if (nameObject == "cot")
	{
		cout << "\nThe correct temperature range for the cot is 54 to 80 degrees F.";
		acceptObject = true;
	}
	else if (nameObject == "lizard")
	{
		cout << "\nThe correct temperature range for the lizard is 75 to 95 degrees F.";
		acceptObject = true;
	}
	else
	{
		cout << "\nThat's not a valid entry. Try again.\n";
		acceptObject = false;
	}
	return acceptObject;
}

/*
bool trueObject(string nameObject, bool acceptObject)
{
	if (nameObject == "cap" || nameObject == "cat" || nameObject == "cot" || nameObject == "lizard")
		acceptObject = true;
	else
	{
		acceptObject = false;
		cout << "\nThat's not a valid entry. Try again.\n";
	}
	return acceptObject;
}
*/

bool trueTemp(string nameObject, float tempObject, bool acceptTemp)
{
	if (nameObject == "cap")
		{
			if (tempObject >= 72 && tempObject <= 88)
				acceptTemp = true;
			else
			{
				acceptTemp = false;
				cout << "\nThat's not a temperature within range (72-88). Try again.";
			}
		}
		else if (nameObject == "cat")
		{
			if (tempObject >= 86 && tempObject <= 102)
				acceptTemp = true;
			else
			{
				acceptTemp = false;
				cout << "\nThat's not a temperature within range (86-102). Try again.";
			}
		}
		else if (nameObject == "cot")
		{
			if (tempObject >= 54 && tempObject <= 80)
				acceptTemp = true;
			else
			{
				acceptTemp = false;
				cout << "\nThat's not a temperature within range (54-80). Try again.";
			}
		}
		else
		{
			if (tempObject >= 75 && tempObject <= 95)
				acceptTemp = true;
			else
			{
				acceptTemp = false;
				cout << "\nThat's not a temperature within range (75-95). Try again.";
			}
		}
	return acceptTemp;
}

/*
copy/paste for my convenience

g++ -std=c++14 -g -Wall ccctc.cpp
*/