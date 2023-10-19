#include <iostream>
using namespace std;
	//This is not an ideal location - we will soon address this

void displayBanner(int L)
{
	for (unsigned int n = 0; n < (L + 4); n++) {
		cout << "*";
	}
	cout << endl;

}

void displayWithinBanner() 

int main()
{
	const string message = "Welcome to Computer Science noel poopoo";
	
	//Get the length of the string

	//Write the banner above

	displayBanner(message.length());

	cout << endl;

	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *

	//Write the banner below
	displayBanner(message.length());
	//Tell the calling shell all is well
	return 0;
}