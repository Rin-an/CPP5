/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:40:30 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/29 05:55:15 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		Form	f1;
		Form	f2("Administrative Form", 4, 1);
		Bureaucrat	a("alpha", 1);
		Bureaucrat	b("beta", 11);
		try{	
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			f2.beSigned(a);
			f1.beSigned(b);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "******************" << std::endl;
		a.signForm(f2);
		b.signForm(f1);
		try{
			b.incrementGrade();
			std::cout << b << std::endl;
			f1.beSigned(b);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		b.signForm(f1);
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
	}
	return 0;
}

