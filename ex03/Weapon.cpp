#include "Weapon.hpp"

Weapon::Weapon( std::string name ){

	this->setType(name);
	return ;
}

Weapon::~Weapon( void ){
	return ;
}

std::string	Weapon::getType( void )const{

	return (_type);
}

void	Weapon:: setType( std::string weapon ){

	_type = weapon;
}