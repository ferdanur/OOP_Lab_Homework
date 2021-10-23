#pragma once
#include <iostream>
#include <string>
using namespace std;

class ComplexNumber {
    // Declaring variables
public:
    int real, imaginary;

    // Constructor to accept
    // real and imaginary part
    ComplexNumber(int tempReal = 0, int tempImaginary = 0)
    {
        real = tempReal;
        imaginary = tempImaginary;
    }

    // Defining addComp() method
    // for adding two complex number
    ComplexNumber addComp(ComplexNumber C1, ComplexNumber C2)
    {
        // creating temporary variable
        ComplexNumber temp;

        // adding real part of complex numbers
        temp.real = C1.real + C2.real;

        // adding Imaginary part of complex numbers
        temp.imaginary = C1.imaginary + C2.imaginary;

        // returning the sum
        return temp;
    }

};
