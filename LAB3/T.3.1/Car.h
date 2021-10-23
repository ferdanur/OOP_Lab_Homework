#pragma once

#include <iostream>
#include <string>
using namespace std;

class Car
{
	private:
		int Speed =0;
		string Color;
	public:
		Car(string, int);// Constructor
		~Car();//Destuctor
		void setColor(string);
		string getColor();
		int getSpeed();
		int Accelerate();
		int Brake();
		int Stop();
		
};

Car::Car( string Clr, int Spd)
{
	Color = Clr;
	Speed = Spd;
}
Car::~Car()
{
	cout << "Destroyed!" << endl;
}

void Car::setColor(string color)
{
	Color = color;
};

string Car::getColor()
{
	return Color;
}


int Car::getSpeed()
{
	return Speed;
}

int Car::Accelerate()
{
	Speed = Speed + 5;

	return Speed;
}

int Car::Brake()
{
	Speed = Speed - 5;

	return Speed;
}

int Car::Stop()
{
	Speed = 0;

	return Speed;
}

