#include <iostream>
#include <math.h>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;
	x = x_p;
	
	while (x <= x_k) 
	{
		sum(); 
		cout << setprecision(5) << fixed;
		cout << setw(10) << x << " "
			<< setw(10) << s << " "
			<< setw(10) << atan(x) << " "
			<< setw(5) << n << endl; 
		x += dx;
	}
	
	cin.get();
	return 0;
}