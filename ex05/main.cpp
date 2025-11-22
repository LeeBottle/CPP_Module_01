#include "Harl.hpp"
#include <iostream>

int main(void) {
    Harl harl;

    // 1. DEBUG 레벨 테스트
    std::cout << "=========================================" << std::endl;
    std::cout << "[ Testing DEBUG ]" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    // 2. INFO 레벨 테스트
    std::cout << "=========================================" << std::endl;
    std::cout << "[ Testing INFO ]" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;

    // 3. WARNING 레벨 테스트
    std::cout << "=========================================" << std::endl;
    std::cout << "[ Testing WARNING ]" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;

    // 4. ERROR 레벨 테스트
    std::cout << "=========================================" << std::endl;
    std::cout << "[ Testing ERROR ]" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;

    // 5. 존재하지 않는 레벨 테스트 (예외 처리 확인용)
    std::cout << "=========================================" << std::endl;
    std::cout << "[ Testing Unknown Level ]" << std::endl;
    harl.complain("HELLO WORLD");
    std::cout << "=========================================" << std::endl;

    return 0;
}