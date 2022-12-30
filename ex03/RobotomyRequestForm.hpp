/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:44:22 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/30 00:35:12 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__
# include <cstdlib>
# include <random>
# include <time.h>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm{
	const std::string	_target;
	public:
		RobotomyRequestForm ();
		RobotomyRequestForm (const std::string&);
		RobotomyRequestForm (const RobotomyRequestForm &a);
		RobotomyRequestForm & operator = (const RobotomyRequestForm &a);
		~RobotomyRequestForm ();
		void		execute(const Bureaucrat&) const;
};

#endif

