#include <iostream>
#include <cmath>
using namespace std;

double fun(double x) {
	return log(4 - 3 * x)/2;
}

double fun2(double x) {
	return exp(2 * x) + 3 * x - 4;
}

int main() {

	cout.precision(5);

	double e = 0.00001,
		a = 0,
		b = 1,
		x1 = 0.5,
		x2 = 0;
	
	int i = 0;

	while (e < (abs(x2 - x1)))
	{
		x1 = x2;
		x2 = fun(x1);
		i++;
	}

	cout << x2 << "  " << fun2(x1) << "  " << i;
}