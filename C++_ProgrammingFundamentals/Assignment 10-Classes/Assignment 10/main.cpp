// Assignment 10 CircleClass: Main

#include <iostream>
#include "Circle.h"

using namespace std;

int main() {

	Circle circle1;
	// sets the first circle
	circle1.setRadius(10.0);
	circle1.setX(0.0);
	circle1.setY(0.0);

	
	// displays everything about the Circle
	cout <<"Radius of Circle 1: "<< circle1.getRadius() << endl;
	cout <<"X of Circle 1: "<< circle1.getX() << endl;
	cout << "Y of Circle 1: "<< circle1.getY() << endl;
	cout << "The area of Circle 1: " << circle1.getArea() << endl;

	cout << " 0 = point is NOT in the circle. 1= point IS in circle : \n";
	//Point in Cricle
	cout<< "Using radius of 10 and point(5,5): "<< circle1.containsPoint(5.0, 5.0)<<endl;
	//point out Circle
	cout << "Using radius of 10 and point(5,15): " << circle1.containsPoint(5.0, 15.0) << endl;
	

	// Start of using Pointers 
	cout << "We will now use pointers to update our previous circle\n"<<endl;

	Circle* circlePtr = NULL;
	circlePtr = &circle1;

	circlePtr->setRadius(20.0);
	circlePtr->setX(30.0);
	circlePtr->setY(10.0);

	cout << "Radius of CirclePtr: " << circlePtr->getRadius() << endl;
	cout << "X of CirclePtr: " << circlePtr->getX() << endl;
	cout << "Y of CirclePtr: " << circlePtr->getY() << endl;
	cout << "The area of CirclePtr: " << circlePtr->getArea() << endl;

	cout << " 0 = point is NOT in the circle. 1= point IS in circle : \n";
	//Point out Circle
	cout << "Using radius of 20 and point(0,5): " << circle1.containsPoint(0.0, 5) << endl;
	//Point in Circle
	cout << "Using radius of 20 and point(15,15): " << circle1.containsPoint(15.0, 15.0) << endl;

	return 0;
}

/*
[jgonz337@hills ~]$ ./a.out
Radius of Circle 1: 10
X of Circle 1: 0
Y of Circle 1: 0
The area of Circle 1: 314
 0 = point is NOT in the circle. 1= point IS in circle :
Using radius of 10 and point(5,5): 1
Using radius of 10 and point(5,15): 0
We will now use pointers to update our previous circle

Radius of CirclePtr: 20
X of CirclePtr: 30
Y of CirclePtr: 10
The area of CirclePtr: 1256
 0 = point is NOT in the circle. 1= point IS in circle :
Using radius of 20 and point(0,5): 0
Using radius of 20 and point(15,15): 1
[jgonz337@hills ~]$
*/