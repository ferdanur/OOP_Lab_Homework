#pragma once
#include "Student.h"
#include <iostream>
#include <list>
#include <iterator>
using namespace std;

class StudentsGroup {
private:
	list<Student*> studentsList;
public:
	void addStudent(Student* studentToAdd) {
		this->studentsList.push_back(studentToAdd);
	}
	list<Student*> getStudentList() {
		return this->studentsList;
	}
	void displayStudentInGroup() {
		for (Student* student : this->studentsList) {
			cout << student->getName() << student->getNote() << endl;
		}
	}
};
