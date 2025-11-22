#include "Values.hpp"

Values::Values( void) {

	return ;
}

Values::~Values( void ){
	return ;
}

void	Values::insertFileName( void ){
	std::string		input;
	
	std::cout << "Please enter file name: ";
	while (1)
	{
		std::getline(std::cin, input); 
		if (input.empty()) {
            std::cout << "Error: File name cannot be empty" << std::endl;
			std::cout << "Please enter again: ";
            continue;
        }
		std::ifstream	ifs(input.c_str());
        if (!ifs) {
            std::cout << "Error: Failed to open the file '"  << input << "'" << std::endl;
			std::cout << "Please enter again: ";
            continue;
        }
		ifs.close();
        break;
    }
	this->filename = input;	
}

void	Values::insertS1( void ){
	std::string		input;

	std::cout << "Please enter 's1' which is the character to be replaced: ";
	if (!std::getline(std::cin, input))
		return;
	while (input.empty()) {
        std::cout << "Error: 's1' cannot be empty" << std::endl;
		std::cout << "Please enter again: ";
		if (!std::getline(std::cin, input))
			return;
    }
	this->s1 = input;
}
void	Values::insertS2( void ){

	std::string		input;
	std::cout << "Please enter 's2' which is the character to be replace: ";
	if (!std::getline(std::cin, input))
		return;
	while (input.empty()) {
        std::cout << "Error: 's2' cannot be empty" << std::endl;
		std::cout << "Please enter again: ";
		if (!std::getline(std::cin, input))
			return;
    }
	this->s2 = input;
}
void	Values::replace( void ){
	std::string		replaceFile;
	std::string		replaceText;
	std::string		str;
	std::ifstream	ifs(filename.c_str());
	size_t			found;
	size_t			count;


	if (ifs){
    	while (std::getline(ifs, str)) {
			count = 0;
			found = 0;
			while ((found = str.find(s1, count)) != std::string::npos) {
				replaceText += str.substr(count, found - count);
				replaceText += s2;
				count = found + s1.length();
			}
			replaceText += str.substr(count);
			if (!ifs.eof())
            	replaceText += "\n";
    	}
	}
	replaceFile = filename + ".replace";
	std::ofstream	ofs(replaceFile.c_str());
	if (!ofs.is_open()){
        std::cerr << "Error: Unable to create file '" << filename << "'" << std::endl;
        exit(1);
    }
	ofs << replaceText;
	ofs.close();
}
