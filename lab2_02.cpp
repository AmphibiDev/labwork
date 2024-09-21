#include <iostream>
#include <windows.h>
#include <cmath>

#define CHECK_TYPE true	// Перевірка через switch (True) / через if-else (False)

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float x, y, fee; char type;
	std::cout << "Enter \"x\": "; std::cin >> x;
	std::cout << "Enter work type: "; std::cin >> type;
	
	#ifdef CHECK_TYPE
	// Using Switch
	switch (type){
		case 'А': { 
			y = 100 * fabs(sin(pow(x, 2)) * cos(pow(x, 3)) - sin(x) + 5.2f + 50); fee = 0.1; break;
		}
		case 'Б': {
			y = 150 * fabs(2 * sin(x) * sin(2 * x - 1.5f) * cos(2 * x - 1.5f) - 6 + 100); fee = 0.15; break;
		}
		case 'В': {
			y = 100 * fabs(fabs(cos(pow(x, 2)) - 0.51f) * sin(3 * x - 4) - 4.44f + 135); fee = 0.2; break;
		}
		default: std::cout << type << "Wrong work type" << std::endl; break;
	}
	#else
	// Using If-Else
	if (type == 'А') y = 100 * fabs(sin(pow(x, 2)) * cos(pow(x, 3)) - sin(x) + 5.2f + 50);
	else if (type == 'Б') y = 150 * fabs(2 * sin(x) * sin(2 * x - 1.5f) * cos(2 * x - 1.5f) - 6 + 100);
	else if (type == 'В') y = 100 * fabs(fabs(cos(pow(x, 2)) - 0.51f) * sin(3 * x - 4) - 4.44f + 135);
	else std::cout << type << "Wrong work type" << std::endl;
	#endif

	std::cout << "Amount Charged = " << y << std::endl;			// Нарахована сума
	std::cout << "Tax Amount = " << y * fee << std::endl;		// Сума податку
	std::cout << "Total Sum = " << y * (1 - fee) << std::endl;	// Сума до видачі

	return 0;
}
