/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:42:27 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/30 04:18:55 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm (): AForm("RobotomyRequest", 72, 45), _target("android")

{
    std::cout << "RobotomyRequestForm: Default constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm (const std::string& target): AForm("RobotomyRequest", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm: Constructor with argumetns called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm &a)
{
	*this = a;
    std::cout << "RobotomyRequestForm: Copy constructor called!" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &a){
    if (this != &a){
        std::cout << "RobotomyRequestForm: Copy assignment operator called!" << std::endl;
    }
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm (){
    std::cout << "RobotomyRequestForm: Destructor called!" << std::endl;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (this->getSigned())
	{
		try
		{	
			if (executor.getGrade() > this->getExec())
				throw AForm::GradeTooLowException();
			srand(time(NULL));
			int	rd = rand() % 4 + 1;
			if (rd <= 2)
				std::cout << this->_target << " has been robotomized successfully." << std::endl;
			else
				std::cout << "The robotomy failed." << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
