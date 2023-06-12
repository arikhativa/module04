#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure()
	: AMateria("cure")
{
	_printPrefix("Cure") << "Default constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure(void)
{
	_printPrefix("Cure") << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cure::use(ICharacter& target)
{
	_printPrefix("Cure") << "* heals " + target.getName() +  "'s wounds *" << std::endl;
}

AMateria* Cure::clone(void) const
{
	return new Cure();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */