#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal 
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string Type);
		Animal(const Animal &obj);
		Animal &operator=(const Animal &obj);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const;
};

#endif