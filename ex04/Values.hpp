#ifndef VALUES_HPP
#define VALUES_HPP
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>


class Values{

private:

	std::string	filename;
	std::string	s1;
	std::string	s2;

public:

	Values( void );
	~Values( void );

	void	insertFileName( void );
	void	insertS1( void );
	void	insertS2( void );
	void	replace( void );
};

#endif
