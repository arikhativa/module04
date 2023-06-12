/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:43:41 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/12 16:48:29 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "print.hpp"
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:
		std::string _type;

	public:
		// AMateria();
		// AMateria(const AMateria &src);
		explicit AMateria(std::string const & type);
		virtual ~AMateria();

		// AMateria &		operator=( AMateria const & rhs );


		std::string const & getType(void) const;
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif /* ******************************************************** AMATERIA_H */
