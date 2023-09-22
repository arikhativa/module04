#include "Brain.hpp"

static void copy_ideas(std::string a[100], const std::string b[100])
{
	for (int i = 0; i < 100; i++)
		a[i] = b[i];
}

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	_printPrefix() << "Default constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	copy_ideas(_ideas, src._ideas);
	_printPrefix() << "Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "";
	_printPrefix() << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
	{
		copy_ideas(_ideas, rhs._ideas);
	}
	_printPrefix() << "Copy assignment operator called." << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::ostream &Brain::_printPrefix(void) const
{
	return _printPrefix("Brain", "");
}

std::ostream &Brain::_printPrefix(const std::string &context, const std::string &type) const
{
	std::string t = type;

	if (t.empty())
		t = "...";
	return std::cout << std::left << std::setw(20) << "[" + context + "]" + "(" + t + ") ";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
