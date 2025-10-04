// Complete Guide to C++ Programming Foundations
// Challenge 03_08
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

double my_average(int a, int8_t b, uint32_t c){
    double result = 0.0;

    // Write your code here
    return static_cast<double>(a + b + c) / 3;
    //return (a + b + c) / 3.0; also good and there are many other ays(check my solutions to type castings)
}

int main(){
    int a = 10;
    int8_t b = 21;
    uint32_t c = 30;
    double learnerResult = my_average(a, b, c);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}