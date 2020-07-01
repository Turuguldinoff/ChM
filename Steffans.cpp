#include <iostream>
#include <cmath>

using namespace std;

double fun(double x) {
	return 4 * (1 - x * x) - exp(x);
}

int main() {

	cout.precision(8);

	int i = 0;

	double x0 = 10,
		x1 = 0.5,
		e = 0.00000001;

	while (e < abs(x1 - x0) && i < 30)
	{
		x0 = x1;
		x1 = x0 - fun(x0) * fun(x0) / (fun(x0 + fun(x0)) - fun(x0));
		i++;
	}

	cout << x1 << "  " << i << "  " << abs(x1 - x0);
}