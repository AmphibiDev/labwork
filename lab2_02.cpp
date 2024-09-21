#include <iostream>
#include <windows.h>
#include <cmath>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float x; char type;
	std::cout << "Enter \"x\": "; std::cin >> x;
	
	std::cout << "Enter work type: "; std::cin >> type;
	switch (type){
		case 'А': { 
			// sin(pow(x, 2))* cos(pow(x, 3)) - sin(x) + 5.2f
			std::cout << "y = " << 100 * abs(sin(pow(x, 2)) * cos(pow(x, 3)) - sin(x) + 5.2f + 50); break;
		}
		case 'Б': {
			// 2*sin(x)*sin(2*x-1.5f)*cos(2*x-1.5f)-6
			std::cout << "y = " << 150 * abs(2 * sin(x) * sin(2 * x - 1.5f) * cos(2 * x - 1.5f) - 6 + 100); break;
		}
		case 'В': {
			// abs(cos(pow(x, 2)) - 0.51f) * sin(3*x-4)-4.44f
			std::cout << "y = " << 100 * abs(abs(cos(pow(x, 2)) - 0.51f) * sin(3 * x - 4) - 4.44f + 135); break;
		}
		default: std::cout << type << "Wrong type" << std::endl; break;
	}
	return 0;
}
