#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{

public:
	Cat();
	Cat(Cat const &src);
	~Cat();

	Cat &operator=(Cat const &rhs);
	virtual void makeSound(void) const;

private:
	Brain *_brain;
	std::ostream &_printPrefix(void) const;
};

#endif /* ************************************************************* CAT_H */
