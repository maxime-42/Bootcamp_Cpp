#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	FragTrapAttack(FragTrap & lenox, FragTrap &zack, std::string type_attack)
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
	std::cout << YELLOW << lenox.getName()  << " I have not enought energy points : " <<  lenox.getEnergy_points() << " i can't continue the attacks\n"  << std::endl;
}

void	ScavTrapAttack(ScavTrap & lenox, ScavTrap &zack, std::string type_attack)
{
	std::string target = zack.getName();
    while (lenox.getEnergy_points() > 25)
	{
		if (type_attack == "random")
			lenox.challengeNewcomer(target);
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
	std::cout << YELLOW << lenox.getName() << " I have not enought energy points : " <<  lenox.getEnergy_points() << " i can't continue the attacks\n"  << std::endl;
}


void repair(ClapTrap & lenox, int cycle)
{

    while (lenox.getEnergy_points() <= 25)
	{
		lenox.beRepaired(cycle);
	}
	std::cout << MAGENTA << lenox.getName() << " he is ready to attack somebody, Energy points : " <<  lenox.getEnergy_points() << "\nWho is the next ?\n"  << NC << std::endl;
}

void testScavTrap()
{
	std::cout << "*********Test ScavTrap*********" << std::endl;
    ScavTrap zack = ScavTrap("Zack");
    ScavTrap lenox = ScavTrap("Lenox");
    ScavTrap charlie = ScavTrap("Charlie");
    ScavTrap leo = ScavTrap("Leo");

	ScavTrapAttack(lenox, zack, "ranged attack");
	repair(lenox, 20);
/***************melee attack*********************************/
	ScavTrapAttack(lenox, charlie, "melee attack");
	repair(lenox, 10);
/*****************random attack*******************************/

	ScavTrapAttack(lenox, zack, "random");
	repair(lenox, 15);
/***************************************************/
}

void testFragTrap()
{
    FragTrap zack = FragTrap("Zack");
    FragTrap lenox = FragTrap("Lenox");
    FragTrap charlie = FragTrap("Charlie");
    FragTrap leo = FragTrap("Leo");
	std::cout << "" << std::endl;
/****************random*****************************/
	FragTrapAttack(lenox, zack, "random");
	repair(lenox, 20);
/****************melee attack************************/
	FragTrapAttack(lenox, charlie, "melee attack");
	repair(lenox, 10);
/******************ranged attack*********************/

	FragTrapAttack(lenox, leo, "ranged attack");
	repair(lenox, 15);
/***************************************************/
}

int main(void)
{
	// std::cout << "\nUnderstand Code Color : " << NC <<  std::endl;
	// std::cout << BG_GRN << "ClaTrap background" << NC << std::endl;
	// std::cout << BG_BLUE << "FraTrap background" << NC << std::endl;
	// std::cout << BG_GRAY << "scavTrap background\n" << NC << std::endl;
	std::cout << "Game start : " << std::endl;
	testFragTrap();
	
	testScavTrap();
	return (0);
}