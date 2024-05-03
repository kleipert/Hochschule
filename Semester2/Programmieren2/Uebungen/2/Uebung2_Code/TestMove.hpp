#include <iostream>
#include "Vector.h"

void testMove()
{
	Vector v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(5);

	Vector v2 = std::move(v1);

	Vector v3;
	v3.push_back(8);
	v3.push_back(13);
	v3.push_back(21);
	v1 = std::move(v3);
	v3.push_back(34);

	std::cout << "V1: " << v1 << std::endl
		<< "V2: " << v2 << std::endl
		<< "V3: " << v3 << std::endl;
}