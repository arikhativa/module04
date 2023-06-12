/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:43:41 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/12 11:54:54 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include <iomanip>

# include "ICharacter.hpp"

class AMateria
{
	private:
		AMateria();

	protected:
		std::string _type;

		virtual std::ostream	&_printPrefix(void) const;
		std::ostream	&_printPrefix(const std::string &context, const std::string &type) const;
		
	public:
		AMateria(std::string const & type);
		AMateria( AMateria const & src );
		~AMateria();

		AMateria &		operator=( AMateria const & rhs );

		std::string const & getType(void) const; //Returns the materia type
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif /* ******************************************************** AMATERIA_H */