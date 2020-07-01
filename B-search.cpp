#include <iostream>
#include <cmath>
using namespace std;

double fun(double x) {
	return exp(2 * x) + 3 * x - 4;
}

int main() {

	cout.precision(3);
	
	double e = 0.001,
		a = 0,
		b = 1,
		k = log2((b - a) / e),
		fa, fb, c, fc;

	int i = 0;

	while (i <= k)
	{
		i++;
		fa = fun(a);
		fb = fun(b);
		c = (a + b) / 2;
		fc = fun(c);
		if (fc > 0)
		{
			b = c;
		}
		else
		{
			a = c;
		}
	}
	cout << c << "   " << fun(c) << "   " << i << endl;
	return 0;
}