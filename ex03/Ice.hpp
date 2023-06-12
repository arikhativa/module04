#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>

# include "AMateria.hpp"
# include "print.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		virtual ~Ice();

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif /* ************************************************************* ICE_H */
