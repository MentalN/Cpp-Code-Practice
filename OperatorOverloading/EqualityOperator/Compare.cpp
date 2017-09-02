#include "Compare.h"


Compare::Compare()
{
}

void Compare::createStuff(int s) {
	size = s;
	stuff = new double[s];
}

void Compare::fillStuff(double something, int elem) {
	stuff[elem] = something;
}

void Compare::counter(int bah) { k = bah;}

double Compare::getStuff(int p) {
	return stuff[p];
}


Compare::~Compare()
{
}
