#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

public:
	Cat();
	Cat(Cat const &src);
	~Cat();

	Cat &operator=(Cat const &rhs);
	void makeSound(void) const;

private:
	Brain *_brain;
	std::ostream &_printPrefix(void) const;
};

#endif /* ************************************************************* CAT_H */
