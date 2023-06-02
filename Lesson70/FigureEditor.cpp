#include "FigureEditor.h"

string FigureEditor::get_info(Figure* figure) {
	string msg = figure->description();
	msg += "\nPerimeter = " + to_string(figure->calculatePerimeter());
	msg += "\nSquare = " + to_string(figure->calculateSquare());
	msg += "\tDraw = " + figure->draw();
	return msg;
}