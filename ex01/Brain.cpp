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
