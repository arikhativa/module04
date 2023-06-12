#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure()
	: AMateria("cure")
{
	_printPrefix() << "Default constructor called" << std::endl;
}

Cure::Cure( const Cure & src )
	: AMateria("cure")
{
	*this = src;
	_printPrefix() << "Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	_printPrefix() << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	_printPrefix() << "Copy assignment operator called.";
	if ( this != &rhs )
		this->_type = rhs._type;
	else
		std::cout << " this == rhs";
	std::cout << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cure::use(ICharacter& target)
{

}

AMateria* Cure::clone(void) const
{
	return new Cure(*this);
}

std::ostream	&Cure::_printPrefix(void) const
{
	return _printPrefix("Cure", _type);
}

std::ostream	&Cure::_printPrefix(const std::string &context, const std::string &type) const
{
	std::string	t = type;

	if (t.empty())
		t = "...";
	return std::cout << std::left << std::setw(20) << "[" + context + "]" + "(" + t + ") ";
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */