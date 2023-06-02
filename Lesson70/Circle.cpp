#include "Circle.h"

int Circle::get_radius() {
	return radius;
}
void Circle::set_radius(int radius) {
	this->radius = radius;
}

double Circle::calculatePerimeter() {
	return 2 * 3.1416 * radius;
}
double Circle::calculateSquare() {
	return radius * radius * 3.1416;
}
string Circle::description() {
	return "This is Circle";
}

string Circle::draw() {
	return "Circle is been drawing...";
}