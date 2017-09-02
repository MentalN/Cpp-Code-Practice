#include <iostream>
using namespace std;

int main() {
	//loop #1A
	for (int i = 0; i < 2; i++) {
		//Loop two times
		cout << "Loop One A" << endl;
	}

	//loop #2A
	for (int i = 0; i < 3; i++) {
		//Loop three times
		cout << "Loop Two A" << endl;
	}

	cout << "*****************************  " << endl;

	//loop #1B
	for (int i = 0; i <= 2; i++) {
		//Loop two times
		cout << "Loop One B" << endl;
	}

	//loop #2B
	for (int i = 0; i <= 3; i++) {
		//Loop three times
		cout << "Loop Two B" << endl;
	}

	system("PAUSE");
}