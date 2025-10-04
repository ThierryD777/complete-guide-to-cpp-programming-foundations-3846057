// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    //Alle Methoden sind korrekt 😊
    //celsius = (float)(fahrenheit - 32) * 5 / 9; // C = (F - 32) * 5/9
    //celsius = static_cast<float>(fahrenheit - 32) * 5 / 9;
    //celsius = (fahrenheit - 32) * 5.0 / 9;
    celsius = (fahrenheit - 32) * 5 / 9.0;

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << static_cast<int>(weight) << std::endl;//the two gives 
    std::cout << "Integer part   : " << (int)(weight) << std::endl;//the same result

    std::cout << "Fractional part: " << (int)((weight - (int)(weight))*10000) << std::endl;//the two gives
    std::cout << "Fractional part: " << static_cast<int>((weight - (int)(weight))*10000) << std::endl;//the same result


    std::cout << std::endl << std::endl;
    return 0;
}
