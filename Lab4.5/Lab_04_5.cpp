#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, a, b, R;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "R = "; cin >> R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;


		if (((y >= -b && y <= 0) && (pow(x, 2) + pow(y, 2) <= pow(R, 2)) && (x <= 0 && x >= -a)) ||
			((y >= 0 && y <= b) && (pow(x, 2) + pow(y, 2) >= pow(R, 2)) && (x <= a && x >= R)))

			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	cout << endl << fixed;

	for (int i = 0; i < 10; i++) 
	{
		x = (2.0 * max(a, b, R) * rand() / static_cast<double>(RAND_MAX)) - max(a, b, R);
		y = (2.0 * max(a, b, R) * rand() / static_cast<double>(RAND_MAX)) - max(a, b, R);

		if ((y >= -b && y <= 0 && x >= -a && x <= 0 && pow(x, 2) + pow(y, 2) <= pow(R, 2)) ||
			(y >= 0 && y <= b && x >= R && x <= a && pow(x, 2) + pow(y, 2) >= pow(R, 2))) 
		{
			cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		}
		else 
		{
			cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	}

	return 0;
}









	




