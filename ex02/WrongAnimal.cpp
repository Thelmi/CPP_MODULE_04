#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal Default Contructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string Type)
{
    (void)Type;
    type = "WrongAnimal";
    std::cout << "WrongAnimal Type Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    type = obj.getType();
    std::cout << "WrongAnimal Copy Constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    type = obj.getType();
    std::cout << "WrongAnimal Assignment operator" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor" << std::endl;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound" << std::endl;
}
std::string WrongAnimal::getType() const
{
	return (type);
}