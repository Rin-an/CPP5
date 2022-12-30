/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 03:22:53 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/29 21:34:14 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm (): _name("random form"), _signed(0), _sign(10), _exec(1)
{
    std::cout << "AForm: Default constructor called!" << std::endl;
}

AForm::AForm(const std::string& name, const int sign, const int exec) : _name(name), _signed(0), _sign(sign), _exec(exec)
{
	if (sign < 1 || exec < 1)
		throw AForm::GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw AForm::GradeTooLowException();
	std::cout << "AForm: Constructor with arguments called!" << std::endl;
}

AForm::AForm (const AForm &a) : _name(a._name), _sign(a._sign), _exec(a._exec)
{
	*this = a;
    std::cout << "AForm: Copy constructor called!" << std::endl;
}

AForm & AForm::operator = (const AForm &a)
{
    if (this != &a){
		_signed = a._signed;
        std::cout << "AForm: Copy assignment operator called!" << std::endl;
    }
	return (*this);
}

AForm::~AForm ()
{
    std::cout << "AForm: Destructor called!" << std::endl;
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Grade Too High!");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low!");
}
const std::string&  AForm::getName(void) const
{
	return (this->_name);
}

bool  AForm::getSigned(void) const
{
	return (this->_signed);
}

void	AForm::setSigned(bool b)
{
	this->_signed = b;
}

int   AForm::getSign(void) const
{
	return (this->_sign);
}

int   AForm::getExec(void) const
{
	return (this->_exec);
}

void	AForm::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > this->_sign)
		throw AForm::GradeTooLowException();
	else
	{
		_signed = 1;
	}
}

std::ostream&   operator<<(std::ostream& o, const AForm& f)
{
    if (f.getSigned())
        o << "AForm: " << f.getName() << " is signed with sign grade being " << f.getSign() << " and execution grade " << f.getExec();
    return o;
}
