#ifndef VIKINGS_H
#define VIKINGS_H

class Vikings
{
public:
	Vikings();
	~Vikings();

	bool checkFightOrFlight();

private:
	static size_t m_vikingsCount;
};

#endif
