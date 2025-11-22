#include "Zombie.hpp"
#include <iostream>

int main(void) {
    std::cout << "----- 1. Heap Allocation (newZombie) Test -----" << std::endl;
    Zombie* heapZombie = newZombie("Heap-Zombie"); 
    heapZombie->announce();

    std::cout << "\n----- 2. Stack Allocation (randomChump) Test -----" << std::endl;
    randomChump("Stack-Zombie");

    std::cout << "\n----- 3. Cleaning up Heap Memory -----" << std::endl;
    delete heapZombie;

    return 0;
}