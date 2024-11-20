#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

//int main()
//{
//	const Animal* meta = new Animal();
//	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//	std::cout << j->getType() << " " << std::endl;
//	std::cout << i->getType() << " " << std::endl;
//	i->makeSound(); //will output the cat sound!
//	j->makeSound();
//	meta->makeSound();
//	delete meta;
//	delete i;
//	delete j;
	
//	// const WrongAnimal* meta = new WrongAnimal();
//	// const WrongAnimal* i = new WrongCat();
//	// std::cout << i->getType() << " " << std::endl;
//	// i->makeSound(); //will output the cat sound!
//	// meta->makeSound();
//	// delete meta;
//	// delete i;

//	return 0;
//}
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

//int main() {

//    std::cout << "=== Basic Functionality ===" << std::endl;
//    const Animal *meta = new Animal();
//    const Animal *dog = new Dog();
//    const Animal *cat = new Cat();

//    std::cout << dog->getType() << std::endl;
//    std::cout << cat->getType() << std::endl;

//    dog->makeSound(); // Dog sound
//    cat->makeSound(); // Cat sound
//    meta->makeSound(); // Generic animal sound

//    delete meta;
//    delete dog;
//    delete cat;

//    // WrongAnimal tests
//    std::cout << "\n=== WrongAnimal Functionality ===" << std::endl;
//    const WrongAnimal *wrongMeta = new WrongAnimal();
//    const WrongAnimal *wrongCat = new WrongCat();

//    std::cout << wrongCat->getType() << std::endl;

//    wrongCat->makeSound();
//    wrongMeta->makeSound();

//    delete wrongMeta;
//    delete wrongCat;

//    std::cout << "\n=== Copy Constructor & Assignment Tests ===" << std::endl;

//    Dog originalDog;
//	std::cout << "The original: ";
//	std::cout << originalDog.getType() << std::endl;

//    Dog copiedDog(originalDog);
//	std::cout << "The copy: ";
//	std::cout << copiedDog.getType() << std::endl;

//	Dog assignedDog = originalDog;
//	std::cout << "The assigned: ";
//	std::cout << assignedDog.getType() << std::endl;

//    Cat originalCat;
//    Cat copiedCat(originalCat);
//    Cat assignedCat = originalCat;
	

//    return 0;
//}

/*
	
*/
int main()
{
	// basic objects
	std:: cout << "basic objects" << std:: endl;
	Animal animal;
	Dog dog;
	Cat cat;

	Animal *ptr = new Dog;
	//ptr->makeSound();
	delete ptr;
}