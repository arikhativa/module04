/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:09:13 by yrabby            #+#    #+#             */
/*   Updated: 2023/09/22 15:57:21 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

public:
	Dog();
	Dog(Dog const &src);
	~Dog();

	Dog &operator=(Dog const &rhs);
	void makeSound(void) const;

	void setIdea(int i, const std::string &idea);
	std::string getIdea(int i) const;

private:
	Brain *_brain;
	std::ostream &_printPrefix(void) const;
};

#endif /* ************************************************************* DOG_H */
