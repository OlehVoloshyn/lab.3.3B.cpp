#pragma once
#include "Pair.h"
class Money :
    public Pair
{
public:
	Money(const long x = 0, const unsigned int y = 0);
	Money(const Money&);
	~Money(void) {};

	friend Money Add(Money l, Money r);
	friend Money Div(Money l, Money r);
	friend Money DivD(Money l, double dr);

	void Init(long, unsigned int);
	void Read();
	void Display()const;
};

