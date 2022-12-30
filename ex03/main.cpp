/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:40:30 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/30 04:53:02 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Intern	intern;
	AForm*	f = NULL;

	f = intern.makeForm("shrubbery creation", "Bender");
	if (f)
	{
		try
		{
			Bureaucrat  b1("Rowan", 120);
			Bureaucrat  b2("Eden", 140);

			f->beSigned(b2);
			b2.signForm(*f);
			b1.executeForm(*f);
		}
		catch (std::exception& e)
		{
			std::cout << "Something went wrong: " << e.what() << std::endl;
		}
	}
	return 0;
}

