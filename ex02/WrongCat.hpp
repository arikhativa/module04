/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:34:24 by yrabby            #+#    #+#             */
/*   Updated: 2023/09/22 15:43:55 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:
	WrongCat();
	WrongCat(WrongCat const &src);
	~WrongCat();

	WrongCat &operator=(WrongCat const &rhs);
	void makeSound(void) const;

private:
	std::ostream &_printPrefix(void) const;
};

std::ostream &operator<<(std::ostream &o, WrongCat const &i);

#endif
