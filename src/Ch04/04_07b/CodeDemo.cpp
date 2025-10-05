// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>

int main(){
    std::vector<std::complex<double>> points;

    points.push_back(std::complex<double>(1.0, 2.0));
    points.push_back(std::complex<double>(3.0, -4.0));
    points.push_back(std::complex<double>(-5.0, 6.0));
    points.push_back(std::complex<double>(7.5, 8.3));

    std::cout << "The first real part: " << points.begin()->real() << std::endl;// same as points[0].real()
    std::cout << "The imaginary part at the 2nd index is: " << points[1].imag() << std::endl;// same as (points.begin() + 2)->imag()
    std::cout << "Next to last real: " << prev(points.end(), 2)->real() << std::endl;// same as points[points.size() - 2].real()
    std::cout << "Last imaginary: " << (points.end() - 1)->imag() << std::endl;// same as points[points.size() - 1].imag()
    
    std::cout << std::endl << std::endl;
    return 0;
}
