#include <iostream>

int main()
{
	int a = 42;
	int& b = a;
	const int& c = a;
	int&& d = a;

	a = 1;
	b = 2;
	c = 3;
	d = 4;

	std::cout << a << ", "
		<< b << ", "
		<< c << ", "
		<< d;
}