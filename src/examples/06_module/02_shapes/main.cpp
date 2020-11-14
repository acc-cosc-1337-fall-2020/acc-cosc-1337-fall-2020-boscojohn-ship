//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/
using std::unique_ptr; using std::make_unique;

int main() 
{
	unique_ptr<Shape> shape;

	shape = make_unique<Circle>();

	shape = make_unique<Line>();
	unique_ptr<Shape> circle = make_unique<Circle>();
	circle->draw();

	unique_ptr<Shape> line = make_unique<Line>();
	line->draw();

	for(auto& shape: shapes)
	{
		out<<*shape;
	}

	return 0;
}