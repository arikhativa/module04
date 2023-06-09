
# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

void	simpleTest(void)
{
	std::cout << "Basic Test:" << std::endl ;
	std::cout << std::endl << " ------ Animal ------ " << std::endl << std::endl;
	{
		Animal a;

		a.makeSound();
		std::cout << "Calling getType():\t" << a.getType() << std::endl;
	}
	std::cout << std::endl << " ------ Animal* ------ " << std::endl << std::endl;
	{
		Animal *a = new Animal();

		a->makeSound();
		std::cout << "Calling getType():\t" << a->getType() << std::endl;
		delete a;
	}
	std::cout << std::endl << " -------- End  ------ " << std::endl << std::endl;
}

void	ctorTest(void)
{
	std::cout << "Constructor Test:" << std::endl;
	std::cout << std::endl << " ----- Animal ----- " << std::endl << std::endl;
	{
		Animal	animal;
		Animal	animal2;

		std::cout << std::endl << " ----- Copy ctor test ----- " << std::endl << std::endl;
		Animal	animal3(animal);
		std::cout << std::endl << " ----- Copy ctor test end ----- " << std::endl << std::endl;

		std::cout << std::endl << " ----- Assign test ----- " << std::endl << std::endl;
		animal2 = animal;
		animal = animal;
		std::cout << std::endl << " ----- Assign test end ----- " << std::endl << std::endl;
	}
	std::cout << std::endl << " -------- End  ------ " << std::endl << std::endl;
}

// void	pointerDtorTest(void)
// {
// 	std::cout << "pointerDtorTest Test:" << std::endl;
// 	std::cout << std::endl << " ----- Create Destroy ----- " << std::endl << std::endl;
// 	{
// 		Clapanimal	*animal = new Animal();
// 		delete animal;
// 	}
// 	std::cout << std::endl << " ----- Use Methods ----- " << std::endl << std::endl;
// 	{
// 		Clapanimal	*animal = new Animal("method");
// 		animal->attack("Yoda");
// 		animal->takeDamage(5);
// 		animal->beRepaired(5);
// 		delete animal;
// 	}
// 	std::cout << std::endl << " ----- Use Methods as Fraganimal ----- " << std::endl << std::endl;
// 	{
// 		Fraganimal	*animal = new Animal("method");
// 		animal->attack("Yoda");
// 		animal->takeDamage(5);
// 		animal->beRepaired(5);
// 		animal->highFivesGuys();
// 		delete animal;
// 	}
// 	std::cout << std::endl << " ----- Use Methods as Scavanimal ----- " << std::endl << std::endl;
// 	{
// 		Scavanimal	*animal = new Animal("method");
// 		animal->attack("Yoda");
// 		animal->takeDamage(5);
// 		animal->beRepaired(5);
// 		animal->guardGate();
// 		delete animal;
// 	}
// 	std::cout << std::endl << " -------- End  ------ " << std::endl << std::endl;
// }



int main( void )
{
	simpleTest();
	ctorTest();
	// pointerDtorTest();

	return 0;
}