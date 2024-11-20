#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
	std::cout << "Cat Default Constructor" << std::endl;
}
Cat::Cat(const Cat &obj) : Animal(obj)
{
    type = obj.getType();
    brain = new Brain();
    brain = obj.brain; // deep coppyy ummm
    std::cout << "Cat Copy Constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
    type = obj.getType();
    std::cout << "Cat Assignment Operator" << std::endl;
    // umm not shallow
    return *this;
}

Cat::~Cat()
{
	delete brain;
    std::cout << "Cat Destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meeow" << std::endl;
}