#include "Header.h"
using namespace std;
int main()
{
	Fraction a;
	Fraction b(2,1);

	show(a-b);
	a.setNumerator(5);
	b.setDenominator(2);
	show(a/b);
}


