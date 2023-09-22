#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
	: AAnimal("Cat"),
	  _brain(new Brain())
{
	_printPrefix() << "Default constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
	: AAnimal(src),
	  _brain(new Brain(*src._brain))
{
	_printPrefix() << "Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete _brain;
	_printPrefix() << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		*_brain = *rhs._brain;
	}
	_printPrefix() << "Copy assignment operator called." << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::ostream &Cat::_printPrefix(void) const
{
	return AAnimal::_printPrefix("Cat", type);
}

void Cat::makeSound(void) const
{
	_printPrefix() << "Cat is Meowing!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
