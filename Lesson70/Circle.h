#pragma once

#include "Figure.h"

class CIrcle :
	public Figure
{
private:
	int radius;
public:

	Circle() : radius(1) {};
	Circle(int radius) : radius(radius > 0 ? radius : 1) {};

	int get_radius();
	void set_radius(int radius);

	double calculatePerimeter();
	double calculateSquare();
	string description();
	string draw();

};