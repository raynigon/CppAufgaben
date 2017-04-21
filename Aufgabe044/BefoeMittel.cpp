#include "BefoeMittel.h"


BefoeMittel::BefoeMittel(int sitze) : sitzp(sitze)
{
}


BefoeMittel::~BefoeMittel()
{
}

const int BefoeMittel::getSitzplaetze() const
{
	return sitzp;
}
