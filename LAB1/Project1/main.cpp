#include<iostream>// cin-cout
using namespace std;

int test(int a, int b) //sum of two numbers
{
	return (a + b);
}

int main() {
	int number1 = 82, number2 = 46;
	cout << "Sum is " << test(number1, number2) << "." << endl;
}