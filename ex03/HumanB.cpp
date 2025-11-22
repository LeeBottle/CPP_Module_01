#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _type(name), _weapon(NULL){

	return ;
}

HumanB::~HumanB( void ){
	return ;
}

void HumanB::setWeapon( Weapon &weapon ){
	this->_weapon = &weapon;
}

void HumanB::attack( void ){
	if (this->_weapon == NULL)
		std::cout << this->_type << " doesn't have a weapon" << std::endl;
	else
		std::cout << this->_type << " attacks with their "<< this->_weapon->getType() << std::endl;
}