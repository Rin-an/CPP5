/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:40:30 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/29 03:29:07 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	{
		try{
			Bureaucrat z("Zineb", 151);
			//Bureaucrat f("Asmae", 0);
			std::cout << z << std::endl;
			//std::cout << f << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try{
			Bureaucrat z("Zineb", 1);
			//Bureaucrat f("Faiza", 150);
			std::cout << z << std::endl;
			//std::cout << f << std::endl;
			z.incrementGrade();
			//f.decrementGrade();
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		}
	{
		try{
			Bureaucrat s;
			Bureaucrat z("Zineb", 10);
			Bureaucrat f("Faiza", 9);
			std::cout << z << std::endl;
			std::cout << f << std::endl;
			std::cout << s << std::endl;
			z.incrementGrade();
			f.decrementGrade();
			s.incrementGrade();
			std::cout << z << std::endl;
			std::cout << f << std::endl;
			std::cout << s << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}

