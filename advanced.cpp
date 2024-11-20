/*
	Abstraction

	base class of students
	has public attrubutes of Name, Age, Gender;
	it has a studying method that every one can inhert
	and that method every one must do its own implementation
*/

/*
	array of students pointers
	every pointer points on another student
	after display all the functions of each class
*/
#include <iostream>
class Student
{
	public:
		std::string Name;
		int age;
		int Gender;
		virtual void study() = 0;
		virtual ~Student()
		{
			
		}
};

class businessStudent : public Student
{
	public:
		void study()
		{
			std:: cout << "selling" << std::endl;
		}
};

class programmingStudent : public Student
{
	public:
		void study()
		{
			std:: cout << "Coooding" << std::endl;
		}
};

class financeStudent : public Student
{
	public:
		void study()
		{
			std:: cout << "money management" << std::endl;
		}
};

class  marketingStudent : public Student
{
	public:
		void study()
		{
			std:: cout << "publicity" << std::endl;
		}
};

int main()
{
	Student *students[4];
	students[0] = new businessStudent;
	students[1] = new programmingStudent;
	students[2] = new financeStudent;
	students[3] = new marketingStudent;

	for(int i = 0; i < 4; i++)
	{
		students[i]->study();
	}
	for (int i = 0; i < 4; i++)
	{
		delete students[i];
	}
	//return 0;
}