#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal Default Contructor" << std::endl;
}

Animal::Animal(std::string Type)
{
    (void)Type;
    type = "Animal";
    std::cout << "Animal Type Constructor" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    type = obj.getType();
    std::cout << "Animal Copy Constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
    type = obj.getType();
    std::cout << "Animal Assignment operator" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor" << std::endl;
}
void Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}
std::string Animal::getType() const
{
	return (type);
}