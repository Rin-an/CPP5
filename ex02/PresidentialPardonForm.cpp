/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:03:52 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/29 23:55:20 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm () : AForm("PresidentialPardon", 25, 5), _target("Douglas"){
    std::cout << "PresidentialPardonForm: Default constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm (const std::string& target) : AForm("PresidentialPardon", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm: Constructor with arguments called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm &a)
{
	*this = a;
    std::cout << "PresidentialPardonForm: Copy constructor called!" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &a)
{
    if (this != &a){
        std::cout << "PresidentialPardonForm: Copy assignment operator called!" << std::endl;
    }
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm ()
{
    std::cout << "PresidentialPardonForm: Destructor called!" << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (this->getSigned())
	{
		try
		{	
			if (executor.getGrade() > this->getExec())
				throw AForm::GradeTooLowException();
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
