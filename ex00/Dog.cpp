#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog Default Constructor" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    type = obj.getType();
    std::cout << "Dog Copy Constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
    if (this != &obj)
	{
		type = obj.getType();
	}
    std::cout << "Dog Assignment Operator" << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Barkkk" << std::endl;
}