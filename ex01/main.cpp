#include "iter.hpp"
#include <iostream>

template <typename T>
void print(T a)
{
	std::cout << a << std::endl;
}

int main()
{
	int tab[5] = {1, 2, 3, 4, 5};
	std::string str[5] = {"chaine1", "chaine2", "chaine3", "chaine4", "chaine5"};
	iter(tab, 5, print);
	std::cout << std::endl;
	iter(str, 5, print);
	std::cout << std::endl;
	return 0;
}