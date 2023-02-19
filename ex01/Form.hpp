/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 03:23:19 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/30 17:33:03 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
#define __FORM_H__
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
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
		Form ();
		Form(const std::string&, const int, const int);
		Form (const Form &a);
		Form & operator = (const Form &a);
		~Form ();
		const std::string&	getName(void) const;
		bool				getSigned(void) const;
		int					getSign(void) const;
		int					getExec(void) const;
		void				beSigned(Bureaucrat&);
};

std::ostream&	operator<<(std::ostream&, const Form&);
#endif

