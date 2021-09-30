#include <iostream>
#include <stdlib.h>

using namespace std;

int giveMeNumber() {
	int number = 0;
	number = rand() % 100;
	return number;
}

int main()
{
	while(true){
		string userInput;
		srand(time(NULL));
		cout << "Hello there, player!\n";
		cout << giveMeNumber() << "\n\n";
		cout << "Get another random number? [ Y / N ]\n";
		cin >> userInput;
		if (userInput == "N") {
			break;
		}
	}
}
