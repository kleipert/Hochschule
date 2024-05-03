#include <iostream>

int main()
{
	int a = 42;
	int& b = 42;
	const int& c = 42;
	int&& d = 42;

	a = 1;
	b = 2;
	c = 3;
	d = 4;

	std::cout << a << ", "
		<< b << ", "
		<< c << ", "
		<< d;
}