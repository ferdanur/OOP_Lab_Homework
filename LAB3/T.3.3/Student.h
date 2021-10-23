#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	int Grade;
	string Name;
	Student(string, int);// Constructor
	~Student();//Destuctor

	void displayStudent();
};

Student::Student(string name, int grade)
{
	Grade = grade;
	Name = name;
};
Student::~Student()
{
	cout << "Destroyed!" << endl;
};
void Student::displayStudent() {
	cout << "Name:" << Name << endl;
	cout << "Grade:" << Grade << endl;
};