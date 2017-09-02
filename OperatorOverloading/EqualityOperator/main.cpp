#include<iostream>
#include"Compare.h"
using namespace std;

int main() {

	int size;
	double input;

	cout << "Select array size: " << endl;
	cin >> size;

	Compare test1;
	test1.createStuff(size);
	for (int i = 0; i <= size - 1; i++) {
		cout << "enter some double value for object 1 :";
		cin >> input;
		test1.fillStuff(input, i);
	}


	Compare test2;
	test2.createStuff(size);
	for (int j = 0; j <= size - 1; j++) {
		cout << "enter some double value for object 2 :";
		cin >> input;
		test2.fillStuff(input, j);
	}


	for (int k = 0; k <= size - 1; k++) {
		test1.counter(k);
			if (test1 == test2)
				cout << "EQUAL" << endl;
	}

}