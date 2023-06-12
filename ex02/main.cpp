
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

	// AAnimal *ptr = new Dog();
	// delete ptr;

	Dog a1;
	Dog a2;

	a1.setIdea(0, "Idea 1");
	a2 = a1;

	std::cout << "brain2 idea[0]:\t\""  + a2.getIdea(0) + "\"" << std::endl;

	return 0;
}