/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:14:54 by itahri            #+#    #+#             */
/*   Updated: 2024/11/04 18:18:21 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"
#include <list>

int main()
{
  std::cout << "=== MUTANT STACK ===" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

  std::cout << "=== LIST ===" << std::endl;
  std::list<int> mlst;
	mlst.push_back(5);
	mlst.push_back(17);
	std::cout << mlst.back() << std::endl;
	mlst.pop_back();
	std::cout << mlst.size() << std::endl;
	mlst.push_back(3);
	mlst.push_back(5);
	mlst.push_back(737);
	//[...]
	mlst.push_back(0);
  std::list<int>::iterator itt = mlst.begin();
  std::list<int>::iterator itte = mlst.end();
	++itt;
	--itt;
	while (itt != itte)
	{
		std::cout << *itt << std::endl;
		++itt;
	}
	return 0;
}
