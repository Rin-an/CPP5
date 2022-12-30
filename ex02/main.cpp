/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:40:30 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/30 00:56:59 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	// ShrubberyCreationForm
	{
		try
		{
			Bureaucrat	b1("Rowan", 120);
			Bureaucrat	b2("Eden", 140);
			ShrubberyCreationForm sh("forest");
		
			sh.beSigned(b2);	
			b2.signForm(sh);
			b1.executeForm(sh);
		}
		catch (std::exception& e)
		{
			std::cout << "Something went wrong: " << e.what() << std::endl;
		}
	}
	// RobotomyRequestForm
	{
		try
		{
			Bureaucrat	b1("alpha", 20);
			Bureaucrat	b2("beta", 60);
			RobotomyRequestForm sh("andromeda");
		
			sh.beSigned(b2);	
			b2.signForm(sh);
			b1.executeForm(sh);
		}
		catch (std::exception& e)
		{
			std::cout << "Something went wrong: " << e.what() << std::endl;
		}
	}
	// WrongPresidentialPardonForm
	{
		try
		{
			Bureaucrat	b1("Reaper", 20);
			Bureaucrat	b2("Guardian", 60);
			PresidentialPardonForm sh("Lost Soul");
		
			sh.beSigned(b2);	
			b2.signForm(sh);
			b1.executeForm(sh);
		}
		catch (std::exception& e)
		{
			std::cout << "Something went wrong: " << e.what() << std::endl;
		}
	}
	// PresidentialPardonForm
	{
		try
		{
			Bureaucrat	b1("Reaper", 3);
			Bureaucrat	b2("Guardian", 20);
			PresidentialPardonForm sh("Lost Soul");
		
			sh.beSigned(b2);	
			b2.signForm(sh);
			b1.executeForm(sh);
		}
		catch (std::exception& e)
		{
			std::cout << "Something went wrong: " << e.what() << std::endl;
		}
	}
		return 0;
}

