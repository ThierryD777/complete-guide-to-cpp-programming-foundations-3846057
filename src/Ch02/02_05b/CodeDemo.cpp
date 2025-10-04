// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 12, c = 7, d; // Global variables accessible to all parts of the code
int main(){
    bool myCondition = true; // Local variable accessible only within main()
    a = 23, d = 98; // Assign values to previously declared global variables

    std::cout << "The value of a is " << a << " and the value of b is " << b << "." << std::endl;
    std::cout << "I am in " << (myCondition ? "good" : "not so good") << " conditions for the upcoming game and had an AR of " << d << "%." << std::endl;

    myCondition = false; // Change the value of the local variable
    
    std::cout << "I am now in " << (myCondition ? "good" : "not so good") << " conditions for the upcoming game and had an AR of " << d - (a+b+c) << "%." << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}
