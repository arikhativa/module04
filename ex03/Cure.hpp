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
		std::ostream	&_printPrefix(void) const;
		std::ostream	&_printPrefix(const std::string &context, const std::string &type) const;

};

#endif /* ************************************************************ CURE_H */