#include <iostream>

int main()
{
	int a = 42;
	double& b = a;
	const double& c = a;
	double&& d = a;

	a = 1;
	b = 2;
	c = 3;
	d = 4;

	std::cout << a << ", "
		<< b << ", "
		<< c << ", "
		<< d;
}