
# include "AAnimal.hpp"
# include "WrongAnimal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "Brain.hpp"
# include "WrongCat.hpp"


int main( void )
{
	// AAnimal Object
	// AAnimal a1;

	AAnimal *ptr = new Dog();
	delete ptr;

	return 0;
}