#include "ComplexNumber.h"

int main()
{

    // First Complex number
    ComplexNumber C1(4, 3);

    // printing first complex number
    cout << "Complex number 1 : " << C1.real
        << " + i" << C1.imaginary << endl;

    // Second Complex number
    ComplexNumber C2(7, 4);

    // printing second complex number
    cout << "Complex number 2 : " << C2.real
        << " + i" << C2.imaginary << endl;

    // for Storing the sum
    ComplexNumber C3;

    // calling addComp() method
    C3 = C3.addComp(C1, C2);

    // printing the sum
    cout << "Sum of complex number : "
        << C3.real << " + i"
        << C3.imaginary;
}