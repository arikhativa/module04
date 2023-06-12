#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:

		Cure();
		Cure( Cure const & src );
		~Cure();

		Cure &		operator=( Cure const & rhs );

		virtual void use(ICharacter& target);
		virtual AMateria* clone() const;
	
	private:
		virtual std::ostream	&_printPrefix(void) const;

};

#endif /* ************************************************************ CURE_H */