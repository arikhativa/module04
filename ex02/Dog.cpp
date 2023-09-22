#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
	: AAnimal(),
	  _brain(new Brain())
{
	type = "Dog";
	_printPrefix() << "Default constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
	: AAnimal(src),
	  _brain(new Brain())
{
	*this = src;
	_printPrefix() << "Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete _brain;
	_printPrefix() << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &Dog::operator=(Dog const &rhs)
{
	_printPrefix() << "Copy assignment operator called.";
	if (this != &rhs)
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

void Dog::setIdea(int i, const std::string &idea)
{
	_brain->setIdea(i, idea);
}

const std::string &Dog::getIdea(int i) const
{
	return _brain->getIdea(i);
}

std::ostream &Dog::_printPrefix(void) const
{
	return AAnimal::_printPrefix("Dog", type);
}

void Dog::makeSound(void) const
{
	_printPrefix() << "Dog is Barking!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
