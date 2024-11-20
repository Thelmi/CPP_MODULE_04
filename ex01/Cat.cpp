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

void Cat::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
    {
        this->brain->ideas[index] = idea;
    }
}

std::string Cat::getIdea(int index) const
{
	if (index >= 0 && index < 100)
    {
        return this->brain->ideas[index];
    }
	std:: cout << "invalid! only 0 - 100" << std::endl;
	return NULL;
}