// Complete Guide to C++ Programming Foundations
// Challenge 02_13
// Data Types, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int add_int(float a, double b, long double c){//but I find this approach wrong. I prefer adding all and cast at the end to avoid lost of values. Another approach is shown later
    int result = 0;
    // Write your code here
    return (int)a+(int)b+(int)c;
}
int addInt(float a, double b, long double c){//this is another approach
    return static_cast<int>(a+b+c);
}

int main(){
    float a = 2.1;
    double b = 3.9;
    long double c = 4.6;

    int learnerResult = add_int(a, b, c);
    int anotherResult = addInt(a, b, c);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    std::cout << "Your other approach returned: " << anotherResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
