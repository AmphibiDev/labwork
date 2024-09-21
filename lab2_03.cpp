#include <iostream>
#include <windows.h>
#include <unordered_map>

struct city_info {
	int population;
	float area;

	city_info() = default;
	city_info(int population, float area) {
		this->population = population;
		this->area = area;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::unordered_map<char, city_info> cities_data = {
		{'А', city_info(37210, 29.00f)}, // avdeevka
		{'Б', city_info(82916, 41.60f)}, // bahmut
		{'В', city_info(356665, 113.20f)}, // vinnitsya
		{'Г', city_info(292250, 422.00f)}, // gorlivka
		{'Д', city_info(1065008, 415.00f)}, // dnipro
		{'Е', city_info(56242, 63.50f)}, // energodar

	};

	char letter;
	std::cin >> letter;

	if (cities_data.find(letter) == cities_data.end()) { std::cout << "Haven't found!"; return 1; }
	std::cout << "Population: " << cities_data[letter].population << "\nArea: " << cities_data[letter].area << std::endl;

	return 0;
}
