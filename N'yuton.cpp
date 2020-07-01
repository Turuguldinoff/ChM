#include <iostream>
#include <cmath>

using namespace std;

double fun(double x) {
	return log(x) + 1 / x - 2;
}

double fun1(double x) {
	return 1 / x - 1 / (x * x);
}

int main() {

	cout.precision(8);

	int i = 0;

	double x0 = 10, 
		x1 = 0.5,//[0.1, 0.5] - обе производные <0
		e = 0.00000001;

	while (e < abs(x1 - x0))
	{
		x0 = x1;
		x1 = x0 - fun(x0) / fun1(x0);
		i++;
	}

	cout << x1 << "  "  << i;
}