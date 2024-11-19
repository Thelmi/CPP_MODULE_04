#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat()
{
    type = "Cat";
	std::cout << "Cat Default Constructor" << std::endl;
}
Cat::Cat(std::string Type) : Animal(Type)
{
    (void)Type;
    type = "Cat";
	std::cout << "Cat Type Constructor" << std::endl;
}
Cat::Cat(const Cat &obj) : Animal(obj)
{
    type = obj.getType();
    std::cout << "Cat Copy Constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
    type = obj.getType();
    std::cout << "Cat Assignment Operator" << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meeow" << std::endl;
}