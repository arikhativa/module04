/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:34:08 by yrabby            #+#    #+#             */
/*   Updated: 2023/09/22 15:45:33 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	virtual ~WrongAnimal();

	WrongAnimal &operator=(WrongAnimal const &rhs);

	const std::string &getType(void) const;
	void makeSound(void) const;

protected:
	std::string type;

	std::ostream &_printPrefix(const std::string &context, const std::string &a_type) const;
	std::ostream &_printPrefix(void) const;
};

#endif
