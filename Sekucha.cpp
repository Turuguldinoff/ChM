#include <iostream>
#include <cmath>

using namespace std;

double fun(double x) {
	return 4 * (1 - x * x) - exp(x);
}

int main() {

	cout.precision(8);

	int i = 0;

	double x0 = 1,
		x1 = 1,
		x2 = 0.5,
		e = 0.00000001;

	while (e < abs(x2 - x1) && i < 30)
	{
		x0 = x1;
		x1 = x2;
		x2 = x1 - fun(x1) * (x1 - x0)/(fun(x1) - fun(x0));
		i++;
	}

	cout << x2 << "  " << i << "  " << abs(x2 - x1);
}