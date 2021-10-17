#include <iostream>
#include "swap.h"

using namespace std;

int main()
{
    cout << "swap by reference" << endl;
    int number1, number2;
    cout << "Enter two numbers A & B" << endl;
    cin >> number1;
    cin >> number2;
    int number11 = number1;
    int number22 = number2;
   
    cout << "swap by reference" << endl;

    cout << "Value of A before swapping: " << number1 << endl;
    cout << "Value of B before swapping: " << number2 << endl;

    swapByReference(number1, number2);

    cout << "Value of A after swapping: " << number1 << endl;
    cout << "Value of B after swapping: " << number2 << endl;

    cout << "swap by address" << endl;
    
    cout << "Value of A before swapping: " << number11 << endl;
    cout << "Value of B before swapping: " << number22 << endl;

    //passing address of a and b
    swapUsingAddress(&number1, &number2);

    cout << "Value of A after swapping: " << number11 << endl;
    cout << "Value of B after swapping: " << number22 << endl;


}