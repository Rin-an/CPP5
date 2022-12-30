/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:01:18 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/30 00:21:57 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__
# include "AForm.hpp"

class PresidentialPardonForm : public AForm{
	const std::string	_target;
	public:
	    PresidentialPardonForm ();
	    PresidentialPardonForm (const std::string&);
	    PresidentialPardonForm (const PresidentialPardonForm &a);
	    PresidentialPardonForm & operator = (const PresidentialPardonForm &a);
	    ~PresidentialPardonForm ();
		void		execute(const Bureaucrat&) const;
};

#endif

