#include <iostream>

class Smartphone
{
	public:
		virtual void TakeAselfie() = 0;
		
};

class Android:public Smartphone
{

	public:
	//void TakeAselfie()
		void hereisphoto()
		{
			std::cout << "here";
		}
};

class Iphone:public Smartphone
{

	public:
	//void TakeAselfie()
		void hereisphoto()
		{
			std::cout << "here";
		}
};
int main()
{
	//Smartphone *s1 = new Android();
	Android k;
	//s1->TakeAselfie();
}