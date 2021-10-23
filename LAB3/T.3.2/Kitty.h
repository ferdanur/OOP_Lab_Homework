#pragma once

#include <iostream>
#include <string>
using namespace std;

class Kitty
{
    private:
        string Name;
        int Age;
    public:
        Kitty(int, string);// Constructor
        ~Kitty();//Destuctor
        void setName(string);
        string getName();
        void setAge(int);
        int getAge();
};

Kitty::Kitty(int age, string name) {
    Age = age;
    Name = name;
}
Kitty::~Kitty(){
    cout << "Destroyed!" << endl;
}
void Kitty::setName(string name) {
    Name = name;
}
string Kitty::getName() {
    return Name;
}
void Kitty::setAge(int age) {
    Age = age;
}
int Kitty::getAge() {
    return Age;
}