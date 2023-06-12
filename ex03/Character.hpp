#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(const std::string &name);
		Character( Character const & src );
		virtual ~Character();
	
		std::string const & getName() const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);


		Character &		operator=( Character const & rhs );

	private:
		const static int _inventorySize = 4;

		std::string _name;
		AMateria	*_inventory[_inventorySize];

};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */