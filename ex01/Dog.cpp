#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog Default Constructor" << std::endl;
}

Dog::Dog(std::string Type) : Animal(Type)
{
    (void)Type;
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog Type Constructor" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    type = obj.getType();
    brain = new Brain();
    brain = obj.brain;
    // umm not shallow
    std::cout << "Dog Copy Constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
    type = obj.getType();
    std::cout << "Dog Assignment Operator" << std::endl;
    // umm not shallow
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