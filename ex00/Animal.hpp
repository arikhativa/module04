#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Animal
{

	public:
		Animal();
		Animal( Animal const & src );
		virtual ~Animal();

		Animal &		operator=( Animal const & rhs );

 		const std::string		&getType(void) const;
		virtual void			makeSound(void) const;

	protected:
		std::string				_type;

		std::ostream	&_printPrefix(const std::string &context, const std::string &type) const;
		std::ostream	&_printPrefix(void) const;
};

#endif /* ********************************************************** ANIMAL_H */