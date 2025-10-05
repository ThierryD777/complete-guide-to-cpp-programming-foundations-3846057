// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<std::string> checkpoints = {"Start", "Forest", "Castle"};

    checkpoints.push_back("Cave");
    checkpoints.push_back("Finish");

    std::cout << "The game has a total of " << checkpoints.size() << " checkpoints." << std::endl;
    std::cout << "The third checkpoint is " << checkpoints[2] << std::endl;
    checkpoints[2] = "White Castle";
    std::cout << "The third checkpoint was updated to '" << checkpoints[2] << "'." << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
