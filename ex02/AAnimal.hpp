#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <iomanip>

class AAnimal
{

	public:
		AAnimal();
		AAnimal( AAnimal const & src );
		virtual ~AAnimal();

		AAnimal &		operator=( AAnimal const & rhs );

 		const std::string		&getType(void) const;
		virtual void			makeSound(void) const = 0;

	protected:
		std::string				_type;

		std::ostream	&_printPrefix(const std::string &context, const std::string &type) const;
		std::ostream	&_printPrefix(void) const;
};

#endif /* ********************************************************** ANIMAL_H */