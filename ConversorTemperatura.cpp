#include <iostream>
int main( int argc, char ** argv ){
	int choice;
	float num;
	
	system("clear");
	std::cout << "\n[1] - Kelvin\n[2] - Celcius\n[3] - Fahrenheit\n\n[Choice]: ";
	std::cin >> choice;

	system("clear");
	std::cout << "\n[Number]: ";
	std::cin >> num;
	system("clear");
	
	switch(choice){
		case 1:
			std::cout << "K - ºC : " << num-273.15 << '\n';
			std::cout << "K - ºF : " << (num-273.15) * 9/5 + 32 << "\n\n";
			break;
		case 2:
			std::cout << "\nºC - K : " << num + 273.15 << '\n';
			std::cout << "ºC - ºF : " << (num * 9/5) + 32 << "\n\n";
			break;
		case 3:
			std::cout << "\nºF - K : " << (num - 32) * 5/9 + 273.15 << '\n';
			std::cout << "ºF - ºC : " << (num - 32) * 5/9 << "\n\n";
			break;
	}
	return 0;
}
