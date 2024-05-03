#include <iostream>
#include <string>

void func(std::string& s) // modifiable L-Value-Reference
{
	std::cout << "mlvRef" << std::endl;
}

void func(const std::string& s) // non-modifiable L-Value-Reference
{
	std::cout << "nmlvRef" << std::endl;
}

void func(std::string&& s) // R-Value-Reference
{
	std::cout << "rvRef" << std::endl;
}

int main()
{
	std::string s1 = "Hallo";
	const std::string s2 = "Kempten";
	const char* s3 = "Amogus";

	func(s1);
	func(s2);
	func(s1 + s2);
	func(s3);
	func(std::string("Bla"));
	func("Blub");
}