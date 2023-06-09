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
		void					makeSound(void) const;

	protected:
		std::string				_type;

		std::ostream	&_printPrefix(const std::string &context, const std::string &type) const;

	private:
		std::ostream	&_printPrefix(void) const;

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */