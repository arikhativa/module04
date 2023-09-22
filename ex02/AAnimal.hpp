#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>

class AAnimal
{

public:
	AAnimal();
	AAnimal(const std::string &type);
	AAnimal(AAnimal const &src);
	virtual ~AAnimal();

	AAnimal &operator=(AAnimal const &rhs);

	const std::string &getType(void) const;
	virtual void makeSound(void) const = 0;

protected:
	std::string type;

	std::ostream &_printPrefix(const std::string &context, const std::string &a_type) const;

private:
	std::ostream &_printPrefix(void) const;
};

#endif /* ********************************************************** ANIMAL_H */
