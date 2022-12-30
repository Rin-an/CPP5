/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:43:57 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/30 00:27:25 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm (): AForm("ShrubberyCreation", 145, 137), _target("home")
{
    std::cout << "ShrubberyCreationForm: Default constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm (const std::string& target): AForm("ShrubberyCreation", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm: Constructor with arguments called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &a)
{
	*this = a;
    std::cout << "ShrubberyCreationForm: Copy constructor called!" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &a){
    if (this != &a){
        std::cout << "ShrubberyCreationForm: Copy assignment operator called!" << std::endl;
    }
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm (){
    std::cout << "ShrubberyCreationForm: Destructor called!" << std::endl;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (this->getSigned())
	{
		try
		{	
			if (executor.getGrade() > this->getExec())
				throw AForm::GradeTooLowException();
			std::ofstream	ofs;
			ofs.open(this->_target + "_shrubbery");
			if (ofs)
			{
				ofs << "       _-_\n"
"    /~~   ~~\\\n"
" /~~         ~~\\\n"
"{               }\n"
" \\  _-     -_  /\n"
"   ~  \\ //  ~\n"
"_- -   | | _- _\n"
"  _ -  | |   -_\n"
"      // \\ " << std::endl;
				ofs.close();
			}
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
