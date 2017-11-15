#include "Vikings.h"


size_t Vikings::m_vikingsCount = 0;

Vikings::Vikings()
{
	++m_vikingsCount;
}

Vikings::~Vikings()
{
	--m_vikingsCount;
}

bool Vikings::checkFightOrFlight()
{
	return m_vikingsCount >= 10;
}
