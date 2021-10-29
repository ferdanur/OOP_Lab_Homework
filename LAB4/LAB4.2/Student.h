#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
	int note;
	string name;
public:
	Student(string name = "Joe Doe", int note = 0) {
		this->note = note;
		this->name = name;
	}
	void setNote(int n) {
		this->note = n;
	}
	int getNote() {
		return this->note;
	}
	string getName() {
		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}
};

