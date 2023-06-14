#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "print.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		explicit Character(const std::string &name);
		Character( Character const & src );
		virtual ~Character();
	
		std::string const &getName() const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		Character &		operator=( Character const & rhs );

	private:
		std::string _name;
		const static int _INVENTORY_SIZE = 4;

		AMateria	*_inventory[_INVENTORY_SIZE];

};

#endif /* ******************************************************* CHARACTER_H */