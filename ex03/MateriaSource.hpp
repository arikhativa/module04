/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:44:09 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/14 10:47:14 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>

# include "print.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		virtual ~MateriaSource();

		MateriaSource &		operator=( MateriaSource const & rhs );

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

	private:
		const static int _INVENTORY_SIZE = 4;

		AMateria	*_inventory[_INVENTORY_SIZE];
};

#endif /* *************************************************** MATERIASOURCE_H */