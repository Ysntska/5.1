// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double h(const double x, const double y, const double z); // прототип
int main()
{
	double a, b;
    cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	double c = (h(a * a, 1., b) + h(b, 1., a * a));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double x, const double y, const double z) // визначення
{
	return (x + y + z) / (x * x + y * y);
}