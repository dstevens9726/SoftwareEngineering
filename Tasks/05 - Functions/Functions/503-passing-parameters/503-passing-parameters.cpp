#include <iostream>
using namespace std;

void displayBanner(int stringLen)
{
	for (unsigned int n = 0; n < (stringLen + 4); n++) {
		cout << "*";
	}
	cout << endl;
}


void displayWithinBanner(string message)
{
	int L = message.length();
	displayBanner(L);

	cout << "* "<< message<< " *" << endl;

	displayBanner(L);


}

int main()
{
	const string message = "Welcome to Computer Science";

	displayWithinBanner(message);


	//Get the length of the string

	/*cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *

	//Write the banner below
	displayBanner(L);

	//Tell the calling shell all is well*/
	return 0;
}