/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 03:23:19 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/30 01:02:31 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AFORM_H__
#define __AFORM_H__
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	const std::string 	_name;
	bool				_signed;
	const int			_sign;
	const int			_exec;
	public:
		class GradeTooHighException : public std::exception{
			public:
				virtual const char*	what() const throw();
		};	
		class GradeTooLowException : public std::exception{
			public:
				virtual const char*	what() const throw();
		};
		AForm ();
		AForm(const std::string&, const int, const int);
		AForm (const AForm &a);
		AForm & operator = (const AForm &a);
		virtual ~AForm ();
		const std::string&	getName(void) const;
		bool	getSigned(void) const;
		void	setSigned(bool);
		int	getSign(void) const;
		int	getExec(void) const;
		void		beSigned(Bureaucrat&);
		virtual void		execute(const Bureaucrat&) const = 0;
};

std::ostream&	operator<<(std::ostream&, const AForm&);
#endif

