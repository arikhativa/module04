
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void simpleTestAnimal(void)
{
	std::cout << std::endl
			  << " ------ Animal ------ " << std::endl
			  << std::endl;
	{
		Animal a;

		a.makeSound();
		std::cout << "Calling getType():\t" << a.getType() << std::endl;
	}
	std::cout << std::endl
			  << " ------ Animal* ------ " << std::endl
			  << std::endl;
	{
		Animal *a = new Animal();

		a->makeSound();
		std::cout << "Calling getType():\t" << a->getType() << std::endl;
		delete a;
	}
}

void simpleTestDog(void)
{
	std::cout << std::endl
			  << " ------ Dog ------ " << std::endl
			  << std::endl;
	{
		Dog a;

		a.makeSound();
		std::cout << "Calling getType():\t" << a.getType() << std::endl;
	}
	std::cout << std::endl
			  << " ------ Dog* ------ " << std::endl
			  << std::endl;
	{
		Dog *a = new Dog();

		a->makeSound();
		std::cout << "Calling getType():\t" << a->getType() << std::endl;
		delete a;
	}
	std::cout << std::endl
			  << " -------- End  ------ " << std::endl
			  << std::endl;
}

void simpleTestCat(void)
{
	std::cout << std::endl
			  << " ------ Cat ------ " << std::endl
			  << std::endl;
	{
		Cat a;

		a.makeSound();
		std::cout << "Calling getType():\t" << a.getType() << std::endl;
	}
	std::cout << std::endl
			  << " ------ Cat* ------ " << std::endl
			  << std::endl;
	{
		Cat *a = new Cat();

		a->makeSound();
		std::cout << "Calling getType():\t" << a->getType() << std::endl;
		delete a;
	}
	std::cout << std::endl
			  << " -------- End  ------ " << std::endl
			  << std::endl;
}

void simpleTestWrong(void)
{
	std::cout << std::endl
			  << " ------ WrongCat ------ " << std::endl
			  << std::endl;
	{
		WrongCat a;

		a.makeSound();
		std::cout << "Calling getType():\t" << a.getType() << std::endl;
	}
	std::cout << std::endl
			  << " ------ WrongCat* ------ " << std::endl
			  << std::endl;
	{
		WrongAnimal *a = new WrongCat();

		a->makeSound();
		std::cout << "Calling getType():\t" << a->getType() << std::endl;
		delete a;
	}
	std::cout << std::endl
			  << " -------- End  ------ " << std::endl
			  << std::endl;
}

void ctorTestAnimal(void)
{
	std::cout << std::endl
			  << " ----- Animal ----- " << std::endl
			  << std::endl;
	{
		Animal animal;
		Animal animal2;

		std::cout << std::endl
				  << " ----- Copy ctor test ----- " << std::endl
				  << std::endl;
		{
			Animal animal3(animal);
		}
		std::cout << std::endl
				  << " ----- Assign test ----- " << std::endl
				  << std::endl;
		animal2 = animal;
	}
	std::cout << std::endl
			  << " -------- End  ------ " << std::endl
			  << std::endl;
}

void ctorTestDog(void)
{
	std::cout << std::endl
			  << " ----- Dog ----- " << std::endl
			  << std::endl;
	{
		Dog animal;
		Dog animal2;

		std::cout << std::endl
				  << " ----- Copy ctor test ----- " << std::endl
				  << std::endl;
		{
			Dog animal3(animal);
		}

		std::cout << std::endl
				  << " ----- Assign test ----- " << std::endl
				  << std::endl;
		animal2 = animal;
	}
	std::cout << std::endl
			  << " -------- End  ------ " << std::endl
			  << std::endl;
}

void ctorTestCat(void)
{
	std::cout << std::endl
			  << " ----- Cat ----- " << std::endl
			  << std::endl;
	{
		Cat animal;
		Cat animal2;

		std::cout << std::endl
				  << " ----- Copy ctor test ----- " << std::endl
				  << std::endl;
		{
			Cat animal3(animal);
		}
		std::cout << std::endl
				  << " ----- Assign test ----- " << std::endl
				  << std::endl;
		animal2 = animal;
	}
	std::cout << std::endl
			  << " -------- End  ------ " << std::endl
			  << std::endl;
}

int main(void)
{
	std::cout << "Basic Test:" << std::endl;
	simpleTestAnimal();
	simpleTestDog();
	simpleTestCat();
	simpleTestWrong();

	std::cout << "Constructor Test:" << std::endl;
	ctorTestAnimal();
	ctorTestDog();
	ctorTestCat();

	return 0;
}
