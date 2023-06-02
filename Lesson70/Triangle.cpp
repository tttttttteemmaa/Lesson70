#include "Triangle.h"

int Triangle::get_a() {
	return a;
}
void Triangle::set_a(int a) {
	this->a = a;
}

int Triangle::get_b() {
	return b;
}
void Triangle::set_b(int b) {
	this->b = b;
}

double Triangle::calculatePerimeter() {
	return a + b + sqrt(a * a + b * b);
}
double Triangle::calculateSquare() {
	return a * b;
}
string Triangle::description() {
	return "This is Treangle.";
}

string Triangle::draw() {
	return "Triangle is been drawing...";
}