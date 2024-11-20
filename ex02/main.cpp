#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{

	Animal *poly[4];
	poly[0] = new Dog();
	poly[1] = new Dog();
	poly[2] = new Cat();
	poly[3] = new Cat();
	for (int k = 0; k < 4; k++)
	{
		poly[k]->makeSound();
	}
	for (int k = 0; k < 4; k++)
	{
		delete poly[k];
	}
	return 0;
}