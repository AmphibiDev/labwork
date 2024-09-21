#include <iostream>
#include <windows.h>

struct city_info {
	int population;
	float area;

	city_info() = default;
	~city_info() = default;
	city_info(int population, float area) {
		this->population = population;
		this->area = area;
	}
};

std::ostream& operator<< (std::ostream& stream, const city_info& data) {
	return stream << "Population: " << data.population << " | Area: " << data.area << std::endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char letter;
	std::cout << "Enter city first letter: "; std::cin >> letter;

	switch (letter) {
		case 'А': std::cout << city_info(37210, 29.00f); break; // avdeevka
		case 'Б': std::cout << city_info(82916, 41.60f); break; // bahmut
		case 'В': std::cout << city_info(356665, 113.20f); break; // vinnitsya
		case 'Г': std::cout << city_info(292250, 422.00f); break; // gorlivka
		case 'Д': std::cout << city_info(1065008, 415.00f); break; // dnipro
		case 'Е': std::cout << city_info(56242,	63.50f); break; // energodar
		case 'Є': std::cout << city_info(105915, 222.70f); break; // yevpatoriya
		case 'Ж': std::cout << city_info(284236, 61.50f); break; // zhitomyr
		case 'З': std::cout << city_info(815256, 331.50f); break; // energodar
		case 'І': std::cout << city_info(218359, 83.70f); break; // ivano-frankivsk
		case 'К': std::cout << city_info(255841, 138.00f); break; // kamyanske
		default: std::cout << "Haven't found!"; break;
	}

	return 0;
}
