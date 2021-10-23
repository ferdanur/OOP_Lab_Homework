#include "Car.h"

int main() {

	string color1 = "Blue";
	string color2 = "Red";
	int speed1 = 10, speed2 = 30;
	Car car1(color1, speed1);
	Car car2(color2, speed2);
	Car car3(color2, speed1);

	
	car1.Brake();
	car1.Brake();
	car3.Accelerate();
	car3.Accelerate();
	car3.Accelerate();
	car3.getSpeed();
	car2.getColor();
	car2.setColor(color2);
	car2.getColor();
	
}