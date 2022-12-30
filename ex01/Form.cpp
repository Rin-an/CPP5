/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 03:22:53 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/29 05:43:42 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form (): _name("random form"), _signed(0), _sign(10), _exec(1)
{
    std::cout << "Form: Default constructor called!" << std::endl;
}

Form::Form(const std::string& name, const int sign, const int exec) : _name(name), _signed(0), _sign(sign), _exec(exec)
{
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form: Constructor with arguments called!" << std::endl;
}

Form::Form (const Form &a) : _name(a._name), _sign(a._sign), _exec(a._exec){
	*this = a;
    std::cout << "Form: Copy constructor called!" << std::endl;
}

Form & Form::operator = (const Form &a){
    if (this != &a){
		_signed = a._signed;
        std::cout << "Form: Copy assignment operator called!" << std::endl;
    }
	return (*this);
}

Form::~Form (){
    std::cout << "Form: Destructor called!" << std::endl;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High!");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low!");
}
const std::string&  Form::getName(void) const
{
	return (this->_name);
}

bool  Form::getSigned(void) const
{
	return (this->_signed);
}

int   Form::getSign(void) const
{
	return (this->_sign);
}

int   Form::getExec(void) const
{
	return (this->_exec);
}

void	Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > this->_sign)
		throw Form::GradeTooLowException();
	else
	{
		_signed = 1;
	}
}

std::ostream&   operator<<(std::ostream& o, const Form& f)
{
    if (f.getSigned())
        o << "Form: " << f.getName() << " is signed with sign grade being " << f.getSign() << " and execution grade " << f.getExec();
    return o;
}
