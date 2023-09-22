/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:43:41 by yrabby            #+#    #+#             */
/*   Updated: 2023/09/22 16:35:44 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "print.hpp"
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
public:
	explicit AMateria(std::string const &type);
	virtual ~AMateria();

	std::string const &getType(void) const;
	virtual AMateria *clone(void) const = 0;
	virtual void use(ICharacter &target);

private:
	AMateria();
	AMateria(const AMateria &src);
	AMateria &operator=(AMateria const &rhs);

	std::string type;
};

#endif /* ******************************************************** AMATERIA_H */
