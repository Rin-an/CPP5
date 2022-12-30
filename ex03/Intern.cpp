/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 00:59:22 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/30 04:48:44 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern (){
    std::cout << "Intern: Default constructor called!" << std::endl;
}

Intern::Intern (const Intern &a){
	*this = a;
    std::cout << "Intern: Copy constructor called!" << std::endl;
}

Intern & Intern::operator = (const Intern &a){
    if (this != &a){
        std::cout << "Intern: Copy assignment operator called!" << std::endl;
    }
	return (*this);
}

Intern::~Intern (){
    std::cout << "Intern: Destructor called!" << std::endl;
}

AForm*	Intern::makeForm(const std::string& form, const std::string& target) const
{
	std::string form_names[]={"shrubbery creation", "robotomy request", "presidential pardon"};
	int	c = 3;

	for (int i=0; i < 3; i++)
	{
		if (form == form_names[i])
		{
			c = i;
			std::cout << "Intern creates " << form << std::endl;
			break ;
		}
	}
	switch (c)
	{
		case (0) :
			return new ShrubberyCreationForm(target);
		case (1) :
			return 	new RobotomyRequestForm(target);
		case (2) :
			return 	new PresidentialPardonForm(target);
		default :
			std::cout << "No such form!" << std::endl;
			return (NULL);
	}
}
