#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog Default Constructor" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	type = obj.getType();
	brain = new Brain(*obj.brain);
	std::cout << "Dog Copy Constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
if (this != &obj)
	{
		type = obj.getType();
		delete brain;
		brain = new Brain(*obj.brain);
	}
	std::cout << "Dog Assignment Operator" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete brain;
    std::cout << "Dog Destructor" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Barkkk" << std::endl;
}