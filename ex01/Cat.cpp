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
	brain = new Brain(*obj.brain);
	std::cout << "Cat Copy Constructor" << std::endl;
	std::cout << "old brain           | " << &obj.brain << std::endl;
	std::cout << "new deep brain copy | " << &this->brain << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	if (this != &obj) 
	{
		type = obj.getType();
		delete brain;
		brain = new Brain(*obj.brain);
	}
	std::cout << "Cat Assignment Operator" << std::endl;
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
