#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "rR = "; cin >> R;
	if ((y >= (sqrt((R * R) - (x + R) * (x + R)))  && x <= 0 && y >= 0) ||
		(y<=2*R*(-R)-2*R && x>= -y && x>=0))

		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}