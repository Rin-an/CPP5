/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:45:00 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/30 00:22:12 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__
# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
	const std::string	_target;
	public:
		ShrubberyCreationForm ();
		ShrubberyCreationForm (const std::string&);
		ShrubberyCreationForm (const ShrubberyCreationForm &a);
		ShrubberyCreationForm & operator = (const ShrubberyCreationForm &a);
		~ShrubberyCreationForm ();
		void		execute(const Bureaucrat&) const;
};

#endif

