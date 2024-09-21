#include <iostream>
#include <cmath>

int main()
{
	float x;
	std::cout << "Enter \"x\": "; std::cin >> x;
	std::cout << "f(x) = " << pow(x, 5) + (pow(x, 4) / tan(x)) + 1;
	return 0;
}
