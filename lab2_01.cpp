#include <iostream>
#include <cmath>

int main()
{
	float x, a = 1.8;
	std::cout << "Enter \"x\": "; std::cin >> x;
	if (x >= 1) {
		std::cout << "y = " << log(x) << std::endl;
	} else if (x > -1 && x < 1) {
		std::cout << "y = " << sqrt(pow(x, 2) + pow(a, 3))/a << std::endl;
	} else if (x <= -1) {
		std::cout << "y = " << exp(x) << std::endl;
	}
	return 0;
}
