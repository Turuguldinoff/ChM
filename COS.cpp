#include <iostream>
#include <string>
#include <math.h>
#include <conio.h>
using namespace std;


int main()
{
    double e, x, c, m = 1;
    int i = 2, h=1, y;

    cin >> x;
    cin >> y;
	e = pow(10,-y);
	x = (x * 3.14159) / 180.0;

    do{
		h *= i * pow(-1,i-1);
		if(i%2==0){
			c = pow(x,i)/h;				
			m += c;
		}
		i++;        
	}while(fabs(c) > e || i <= 2 * y);
	cout.precision(y);
	cout << "cos - " << m << endl;
	getch();
	return 0;
}