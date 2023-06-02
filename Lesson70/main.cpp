#include "FigureEditor.h"
#include "Triangle.h"
#include "Circle.h"

int main(void) {
	Triangle* tr1 = new Triangle(3, 4);
	Circle* cr1 = new Circle(5);


	
	cout << FigureEditor::get_info(tr1) << endl;
	cout << FigureEditor::get_info(cr1) << endl;


	return 0;
}