#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
	: Animal(),
	_brain(new Brain())
{
	type = "Cat";
	_printPrefix() << "Default constructor called" << std::endl;
}

Cat::Cat( const Cat & src )
	: Animal(),
	_brain(new Brain())
{
	*this = src;
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

Cat &				Cat::operator=( Cat const & rhs )
{
	_printPrefix() << "Copy assignment operator called.";
	if ( this != &rhs )
	{
		this->type = rhs.type;
		*_brain = *rhs._brain;
	}
	else
		std::cout << " this == rhs";
	std::cout << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::ostream	&Cat::_printPrefix(void) const
{
	return Animal::_printPrefix("Cat", type);
}

void	Cat::makeSound(void) const
{
	_printPrefix() << "Cat is Meowing!" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */