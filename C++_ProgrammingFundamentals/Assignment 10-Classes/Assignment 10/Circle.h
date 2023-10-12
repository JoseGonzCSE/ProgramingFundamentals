// Assignment 10 CircleClass: Circle.h

//initializes the Circle class
#ifndef CIRCLE_H
#define CIRLCE_H

class Circle {
private:
	double x;
	double y;
	double radius;
public:
	void setRadius(double r);
	void setX(double value);
	void setY(double value);
	double getRadius();
	double getX();
	double getY();
	double getArea();
	bool containsPoint(double xValue, double yValue);
};
#endif