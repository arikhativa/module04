#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "print.hpp"

class Ice : public AMateria
{
public:
	Ice();
	virtual ~Ice();

	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);

private:
	Ice(const Ice &src);
	Ice &operator=(Ice const &rhs);
};

#endif /* ************************************************************* ICE_H */
