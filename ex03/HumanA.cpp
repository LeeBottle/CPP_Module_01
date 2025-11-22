#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _type(name), _weapon(weapon){

	return ;
}

HumanA::~HumanA( void ){
	return ;
}


void HumanA::attack( void )
{
	std::cout << this->_type << " attacks with their " << this->_weapon.getType() << std::endl;
}