
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"

void case1()
{
	std::cout << "Cat Ctor:" << std::endl;
	{
		Cat a1;
		std::cout << std::endl
				  << " - Copy Ctor - " << std::endl
				  << std::endl;
		Cat a2(a1);
	}
	std::cout << std::endl
			  << " - Assign op - " << std::endl
			  << std::endl;
	{
		Cat a1;
		Cat a2;

		a1 = a2;
	}
	std::cout << std::endl
			  << " - Cat* - " << std::endl
			  << std::endl;
	{
		Animal *a1 = new Cat();

		delete a1;
	}
	std::cout << std::endl
			  << " -------- Break  ------ " << std::endl
			  << std::endl;
}

void case2()
{
	std::cout << "Dog Ctor:" << std::endl;
	{
		Dog a1;
		std::cout << std::endl
				  << " - Copy Ctor - " << std::endl
				  << std::endl;
		Dog a2(a1);
	}
	std::cout << std::endl
			  << " - Assign op - " << std::endl
			  << std::endl;
	{
		Dog a1;
		Dog a2;

		a1 = a2;
	}
	std::cout << std::endl
			  << " - Dog* - " << std::endl
			  << std::endl;
	{
		Animal *a1 = new Dog();

		delete a1;
	}
	std::cout << std::endl
			  << " -------- Break  ------ " << std::endl
			  << std::endl;
}

void case3()
{
	std::cout << std::endl
			  << " - Array - " << std::endl
			  << std::endl;

	const Animal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}
	std::cout << std::endl
			  << " -------- Break  ------ " << std::endl
			  << std::endl;
}

void case4()
{
	std::cout << std::endl
			  << " - Deep copy - " << std::endl
			  << std::endl;

	Dog a;

	a.setIdea(0, "Idea 1");
	a.setIdea(1, "Idea 2");

	Dog b(a);

	b.getIdea(0);
	b.getIdea(1);

	std::cout << std::endl;

	std::cout << "Dog a[0]: " << a.getIdea(0) << " - Dog b[0]: " << b.getIdea(0) << std::endl;
	std::cout << "Dog a[1]: " << a.getIdea(1) << " - Dog b[1]: " << b.getIdea(1) << std::endl;

	std::cout << std::endl
			  << " -------- Break  ------ " << std::endl
			  << std::endl;
}

int main(void)
{
	std::cout << "Basic Test:" << std::endl;
	case1();
	case2();
	case3();
	case4();
	std::cout << std::endl
			  << " -------- End  ------ " << std::endl
			  << std::endl;

	return 0;
}
