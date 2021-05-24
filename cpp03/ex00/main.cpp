#include "FragTrap.hpp"
#define RANDOM_ATTACK 1
#define MELEE_ATTACK  2
#define RANGED_ATTACK  2


void	attack(FragTrap & lenox, FragTrap &zack, std::string type_attack)
{
	std::string target = zack.getName();
    while (lenox.getEnergy_points() > 25)
	{
		if (type_attack == "random")
			lenox.vaulthunter_dot_exe(target);
		else if (type_attack == "melee attack")
		{
			lenox.meleeAttack(target);
			lenox.reductEnergy(13);
		}
		else if (type_attack == "ranged attack")
		{
			lenox.rangedAttack(target);
			lenox.reductEnergy(13);
		}
		zack.takeDamage(10);
	}
	std::cout << YELLOW << "FR4G-TP " << "I have not enought energy points : " <<  lenox.getEnergy_points() << " i can't continue the attacks\n"  << std::endl;
}

void repair(FragTrap & lenox, int cycle)
{

    while (lenox.getEnergy_points() <= 25)
	{
		lenox.beRepaired(cycle);
	}
	std::cout << MAGENTA << "FR4G-TP " << lenox.getName() << " he is ready to attack somebody, Energy points : " <<  lenox.getEnergy_points() << "\nWho is the next ?\n"  << NC << std::endl;
}

int main()
{
    FragTrap zack = FragTrap("Zack");
    FragTrap lenox = FragTrap("Lenox");
    FragTrap charlie = FragTrap("Charlie");
    FragTrap leo = FragTrap("Leo");

	attack(lenox, zack, "random");
	repair(lenox, 20);
/***************************************************/
	attack(lenox, charlie, "melee attack");
	repair(lenox, 10);
/***************************************************/

	attack(lenox, leo, "ranged attack");
	repair(lenox, 15);
/***************************************************/

    return (0);
}