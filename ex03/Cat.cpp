#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
	: AAnimal(),
	_brain(new Brain())
{
	_type = "Cat";
	_printPrefix() << "Default constructor called" << std::endl;
}

Cat::Cat( const Cat & src )
	: AAnimal(),
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
		this->_type = rhs._type;
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
	return AAnimal::_printPrefix("Cat", _type);
}

void	Cat::makeSound(void) const
{
	_printPrefix() << "Cat is Meowing!" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */