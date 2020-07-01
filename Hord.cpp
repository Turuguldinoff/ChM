#include <iostream>
#include <cmath>
using namespace std;

double fun(double x) {
	return pow(x, 3) - 0.2 * pow(x, 2) + 0.5 * x + 1.5;
}

int main() {

	cout.precision(3);

	double e = 0.001,
		a = -1,
		b = 0,
		c = b,
		c1 = 1000;

	int i = 0;

	while (fabs(c1 - c) > e)
	{
		i++;
		c1 = c;
		c = c - ((fun(c)*(c-a))/(fun(c)-fun(a)));
		cout << c << "  " << fabs(c - c1) << "   " << i << endl;
	}
	return 0;
}