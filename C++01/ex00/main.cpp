#include "Zombie.hpp"

int main(){

	Zombie test("Henry Cavill");
	test.announce();

	Zombie* testptr = newZombie("Heap");
	testptr->announce();
	delete testptr;

	randomChump("Stack");

	return (0);
}
