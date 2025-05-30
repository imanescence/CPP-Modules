/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:00:41 by iait-ouf          #+#    #+#             */
/*   Updated: 2025/05/22 17:58:50 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main() {
	
	MutantStack<int> mstack;
	
	srand(time(0));

	std::cout << "I push 2 elements in the stack, and i'm using 2 times the fctn top in order to check the last element put in the stack " << std::endl;
	std::cout << "\n";

	mstack.push(5);
	std::cout << "The first call of top : " << mstack.top() << std::endl; 

	mstack.push(17);
	std::cout << "The second call of top : " << mstack.top() << std::endl;
	std::cout << "\n";

	std::cout << "Ok, now i'm using pop which pop out the last element put on the stack, so : " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "We can check the size of the stack after pop : " << mstack.size() << " instead of " << mstack.size() + 1 << " and the top element is now : " << mstack.top() << std::endl;
	std::cout << "\n";
	
	for (int i = 0; i < 20; ++i) {
	
		mstack.push(rand() % 101);
	}

	std::cout << "Now I'm generating 20 random elements btw 0 and 100 and which I push on the stack and I iterate through stack contents:\n";

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	while (it != ite) {
		std::cout << *it << " ";
		++it;
	}
	
	std::cout << std::endl;

	std::cout << "\nReverse iteration:\n";
	for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit) {
		std::cout << *rit << " ";
	}
	std::cout << "\n";	
	std::cout << "\n";

	std::cout << "And if I do the first actions I did at the beggining..." << std::endl;

	std::cout << "Call of top : " << mstack.top() << std::endl;
	std::cout << "\n";
	
	std::cout << "Ok, now i'm using pop which pop out the last element put on the stack, so : " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "\n";
	
	std::cout << "We can check the size of the stack after pop : " << mstack.size() << " instead of " << mstack.size() + 1 << " and the top element is now : " << mstack.top() << std::endl;
	std::cout << "\n";
		
	std::cout << "\n";
	std::cout << " +------------------ SAME THINGS WITH A REAL LIST OF STL -----------------+" << std::endl;
	std::cout << "\n";
	
	std::list<int> mlist;
	
	srand(time(0));

	std::cout << "I push 2 elements in the stack, and i'm using 2 times the fctn top in order to check the last element put in the stack " << std::endl;
	std::cout << "\n";

	mlist.push_back(5);
	std::cout << "The first call of top (back in list) : " << mlist.back() << std::endl; 

	mlist.push_back(17);
	std::cout << "The second call of top : " << mlist.back() << std::endl;
	std::cout << "\n";

	std::cout << "Ok, now i'm using pop_back which pop out the last element put on the list, so : " << mlist.back() << std::endl;

	mlist.pop_back();

	std::cout << "We can check the size of the list after pop_back : " << mlist.size() << " instead of " << mlist.size() + 1 << " and the top element is now : " << mlist.back() << std::endl;
	std::cout << "\n";
	
	for (int i = 0; i < 20; ++i) {
	
		mlist.push_back(rand() % 101);
	}

	std::cout << "Now I'm generating 20 random elements btw 0 and 100 and which I push on the list and I iterate through stack contents:\n";

	while (it != ite) {
		std::cout << *it << " ";
		++it;
	}
	
	std::cout << std::endl;

	std::cout << "\nReverse iteration:\n";
	
	for (std::list<int>::reverse_iterator rit = mlist.rbegin(); rit != mlist.rend(); ++rit) {
		std::cout << *rit << " ";
	}
	
	std::cout << "\n";	
	std::cout << "\n";

	std::cout << "And if I do the first actions I did at the beggining..." << std::endl;

	std::cout << "Call of top : " << mlist.back() << std::endl;
	std::cout << "\n";
	
	std::cout << "Ok, now i'm using pop_back which pop out the last element put on the list, so : " << mlist.back() << std::endl;

	mlist.pop_back();
	std::cout << "\n";
	
	std::cout << "We can check the size of the list after pop : " << mlist.size() << " instead of " << mlist.size() + 1 << " and the top element is now : " << mlist.back() << std::endl;
	std::cout << "\n";
	
	return 0;
}
