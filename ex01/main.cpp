#include "Zombie.hpp"
#include <iostream>

int main() {
    int N = 5;
    std::string name = "CloneZombie"; 

    std::cout << "--- 1. Creating " << N << " zombies named '" << name << "' ---" << std::endl;
    Zombie* horde = zombieHorde(N, name);

    std::cout << "\n--- 2. Announcing each zombie ---" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cout << "[" << i << "] "; 
        horde[i].announce();
    }

    std::cout << "\n--- 3. Deleting the horde ---" << std::endl;
    delete [] horde;

    return 0;
}