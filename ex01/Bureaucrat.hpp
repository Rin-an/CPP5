/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:41:24 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/29 05:29:19 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__
# include <iostream>
# include "Form.hpp"

class	Form;

class Bureaucrat{
	const std::string 	_name;
	int					_grade;
	public:
		class GradeTooHighException : public std::exception{
			public:
				virtual const char*	what() const throw();
		};	
		class GradeTooLowException : public std::exception{
			public:
				virtual const char*	what() const throw();
		};
		Bureaucrat ();
		Bureaucrat (const std::string&, int);
		Bureaucrat (const Bureaucrat &a);
		Bureaucrat & operator = (const Bureaucrat &a);
		~Bureaucrat ();
		void				setGrade(int grade);
		int					getGrade(void) const;
		const std::string&	getName(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(Form&) const;
};

std::ostream&	operator<<(std::ostream&, const Bureaucrat&);
#endif

