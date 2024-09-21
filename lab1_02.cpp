#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main()
{
	float r, h;
	std::cout << "Enter radius: "; std::cin >> r; std::cout << "Enter height: "; std::cin >> h;
	std::cout << "Surface Area = " << 2 * M_PI * r * (r + h) << std::endl;
	return 0;
}
