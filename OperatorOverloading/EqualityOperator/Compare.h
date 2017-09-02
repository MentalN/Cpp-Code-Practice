#pragma once
#include <iostream>
using namespace std;

class Compare
{
public:
	Compare();
	void createStuff(int);
	void fillStuff(double, int);
	void counter(int);
	//OVERLOAD: START
	bool operator==(const Compare& obj){
		if (this->stuff[k] == obj.stuff[k])
			return true;
		else
			return false;
	}
	//END
	double getStuff(int);
	~Compare();
private:
	double *stuff;
	int size;
	int k;
	int numSame;
};

