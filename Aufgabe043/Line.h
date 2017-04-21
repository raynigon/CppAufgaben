#pragma once
#include "IDrawable.h"
#include "Punkt.h"
#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

class Line : public IDrawable {
public:
	Line();
	~Line();
	Punkt set_P1(int x1, int y1);
	Punkt set_P2(int x1, int y1);
	void draw();
	friend ostream& operator<< (ostream& os, const Line& line)
	{
		os << "(" << line.x1 << "," << line.y1;
		os << ";" << line.x2 << "," << line.y2 << ")";
		return os;
	}
private:
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
};
	

