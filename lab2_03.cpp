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
		case 'Л': std::cout << city_info(115229, 95.64f); break; // lysychansk
		case 'М': std::cout << city_info(492176, 134.70f); break; // mariupol
		case 'Н': std::cout << city_info(136280, 50.00f); break; // nikopol
		case 'О': std::cout << city_info(1029049, 162.42f); break; // odesa
		case 'П': std::cout << city_info(317998, 103.00f); break; // poltava
		case 'Р': std::cout << city_info(248813, 63.00f); break; // rivne
		case 'С': std::cout << city_info(248813, 864.00f); break; // sevastopol
		case 'Т': std::cout << city_info(227755, 86.00f); break; // ternopil
		case 'У': std::cout << city_info(117317, 65.00f); break; // uzhgorod
		case 'Х': std::cout << city_info(1470902, 350.00f); break; // kharkiv
		case 'Ч': std::cout << city_info(304994, 79.00f); break; // chernihiv	
		case 'Ш': std::cout << city_info(59589, 19.69f); break; // shahtarsk	
		case 'Щ': std::cout << city_info(11699, 3.42f); break; // shcholkine	
		case 'Ю': std::cout << city_info(38206, 24.38f); break; // yuzhnoukrainsk	
		case 'Я': std::cout << city_info(81654, 28.29f); break; // yalta	
		default: std::cout << "Haven't found!"; break;
	}

	return 0;
}
