#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>

# include "AMateria.hpp"
# include "print.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		virtual ~Cure();

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif /* ************************************************************ CURE_H */