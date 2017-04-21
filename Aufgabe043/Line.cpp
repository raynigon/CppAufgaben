#include "Line.h"



Line::Line()
{
}

Punkt Line::set_P1(int inX, int inY)
{
	x1 = inX;
	y1 = inY;
	return Punkt(inX, inY);
}

Punkt Line::set_P2(int inX, int inY)
{
	x2 = inX;
	y2 = inY;
	return Punkt(inX, inY);
}

void Line::draw()
{
	cout << *this << endl;
}


Line::~Line()
{
}
