#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Brain
{

public:
	Brain();
	Brain(Brain const &src);
	~Brain();

	Brain &operator=(Brain const &rhs);

private:
	std::string _ideas[100];

	std::ostream &_printPrefix(const std::string &context, const std::string &type) const;
	std::ostream &_printPrefix(void) const;
};

std::ostream &operator<<(std::ostream &o, Brain const &i);

#endif /* *********************************************************** BRAIN_H */
