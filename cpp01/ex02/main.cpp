#include "ZombieEvent.hpp"

int main(int ac, char **av)
{
    ZombieEvent testZombieEvent;

    if (ac == 2)
	{
		Zombie *ptr = testZombieEvent.newZombie(av[1]);
		delete ptr;
	}
    else
        testZombieEvent.randomChump();
    return (0);
}