#pragma once
#include <string>

using std::string;

class IReport
{
public:
	virtual string getMonatsReport() = 0;
};

