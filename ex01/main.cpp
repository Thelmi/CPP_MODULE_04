#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() 
{
    std::cout << "=== Basic Functionality ===" << std::endl;

    // Create animals
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    // Polymorphic behavior
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    dog->makeSound();  // Dog sound
    cat->makeSound();  // Cat sound
    meta->makeSound(); // Animal sound

    delete meta;
    delete dog;
    delete cat;

    std::cout << "\n=== WrongAnimal Functionality ===" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << std::endl;

    wrongCat->makeSound(); // Outputs WrongAnimal sound
    wrongMeta->makeSound(); // Outputs WrongAnimal sound

    delete wrongMeta;
    delete wrongCat;

    std::cout << "\n=== Copy Constructor & Assignment Tests ===" << std::endl;
    Dog originalDog;
    Dog copiedDog(originalDog); // Copy constructor
    Dog assignedDog = originalDog; // Assignment operator

    Cat originalCat;
    Cat copiedCat(originalCat); // Copy constructor
    Cat assignedCat = originalCat; // Assignment operator 

    // Clean up the array of animals (dogs and cats)
    std::cout << "\n=== Cleanup ===" << std::endl;
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

