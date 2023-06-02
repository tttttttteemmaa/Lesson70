#pragma once
#include "Figure.h"
class Triangle : public Figure
{
private:
	int a;
	int b;
public:
	Triangle() : a(1), b(1) {};
	Triangle(int a, int b)
		: a(a = a > 0 ? a : 1), b(b = b > 0 ? b : 1) {};

	int get_a();
	void set_a(int a);

	int get_b();
	void set_b(int b);

	double calculatePerimeter();
	double calculateSquare();
	string description();
	string draw();
};