#include <iostream>
#include <string>
using namespace std;

// prototypes
void displayMenu();

int main()
{
	float tempObject;

	displayMenu();
	cin >> tempObject;
	cout << "\nThe temperature is " << tempObject << "F.\n";
}

void displayMenu()
{
	cout << "Just printing things.\n";
}