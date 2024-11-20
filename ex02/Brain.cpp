#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Contructor" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	for(int i = 0; i < 100; i++)
	{
		ideas[i] = obj.ideas[i];
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &obj)
{
	if (this != &obj) 
	{
		for (int i = 0; i < 100; i++) 
			ideas[i] = obj.ideas[i];
	}
	std::cout << "Brain copy assignment operator called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}


void Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
    {
        ideas[index] = idea;
    }
}

std::string Brain::getIdea(int index) const 
{
    return ideas[index];
}