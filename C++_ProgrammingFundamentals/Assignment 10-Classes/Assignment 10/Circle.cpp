// Assignment 10 CircleClass: Circle.cpp

#include "Circle.h"
#include <iostream>
#include <math.h>

using namespace std;

void Circle::setRadius(double r) {
	radius = r;
}

void Circle::setX(double value) {
	x = value;
}

void Circle::setY(double value) {
	y = value;
}

double Circle::getRadius() {
	return radius;
}
double Circle::getX() {
	return x;
}

double Circle::getY() {
	return y;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

// decided to Calculate the distance by parts rather than one big equation
bool Circle::containsPoint(double xValue, double yValue) {
	
	double tempx;
	double tempy;
	
	//operations on the Point x and Y variables to Circle x and y variables
	tempx = xValue - x;
	tempy = yValue - y;

	// squares the results of both
	tempx *= tempx;
	tempy *= tempy;

	//adds the newly squared numbers and squarroots them

	double result = sqrt(tempx + tempy);

	if (result <= radius)
		return true;
	else
		return false;

}
