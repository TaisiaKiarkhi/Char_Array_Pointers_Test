#include <iostream>
#include <string.h>
int main() {

	const char* word{ "Hello there ahahha" };
	std::string word_2{ "Hello there" };
	std::string word_3[3]{ "ssdd","wkdmoe", "dmled" };
	word_2[0] = 'a';
	//std::cout << word_2;

	std::cout << word_3[1][3];

	const char* name_1{ "Fatty Arbuckle" };
	const char* name_2{ "Clara Bow" };
	const char* name_3{ "Lassie" };
	const char* verb{ "Your lucky star is " };

	std::cout << "Pick a lucky star" << std::endl;
	size_t choice{ 0 };
	std::cin >> choice;
	switch (choice) {
	case 1: std::cout << verb << name_1 << std::endl; break;
	case 2: std::cout << verb << name_2 << std::endl; break;
	case 3: std::cout << verb << name_3 << std::endl; break;


	default: std::cout << "Wrong choice" << std::endl;

	}

	std::cout << &name_3[0] << " " << name_3 << " " << *name_3 << " " << &name_3 << " "
		<< &name_3[0]<<" "<<name_3[1] << std::endl;

}