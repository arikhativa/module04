#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "print.hpp"

class Cure : public AMateria
{
public:
	Cure();
	virtual ~Cure();

	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);

private:
	Cure(const Cure &src);
	Cure &operator=(Cure const &rhs);
};

#endif /* ************************************************************ CURE_H */
