// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};
struct game_characters{
    std::string name;
    int level;
    character_role role;
};

int main(){
    game_characters player1;
    player1.name = "Andrew";
    player1.level = 13;
    player1.role = character_role::protagonist;
    
    std::cout << player1.name << " is a level " << player1.level << " character with the role of " << (int)player1.role << "." << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
