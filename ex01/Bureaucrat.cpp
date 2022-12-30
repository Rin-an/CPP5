/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:38:31 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/30 04:01:22 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat () : _name("Sahar"), _grade(150)
{
    std::cout << "Bureaucrat: Default constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat (const std::string& name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
    std::cout << "Bureaucrat: Constructor with arguments called!" << std::endl;
}

Bureaucrat::Bureaucrat (const Bureaucrat &a)
{
	*this = a;
    std::cout << "Bureaucrat: Copy constructor called!" << std::endl;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &a)
{
    if (this != &a)
	{
		this->_grade = a._grade;
        std::cout << "Bureaucrat: Copy assignment operator called!" << std::endl;
    }
	return (*this);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High!");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low!");
}

Bureaucrat::~Bureaucrat ()
{
    std::cout << "Bureaucrat: Destructor called!" << std::endl;
}

void	Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}

int		Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

const std::string&	Bureaucrat::getName(void) const
{
	return (this->_name);
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::signForm(Form& f) const
{
	if (f.getSigned())
	{
		std::cout << this->_name << " signed " << f.getName() << "." << std::endl;
	}
	else
		std::cout << this->_name << " couldn't sign " << f.getName() << " because they need to work harder." << std::endl;
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return o;
}
