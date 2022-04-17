#include"Pair.h"
#include "Money.h"



Money Add(Money l, Money r)
{
	Money t;


	t.setA(l.getA() + r.getA() + floor((l.getB() + r.getB()) / 100)); 

	t.setB((l.getB() + r.getB()) % 100);

	return t;
}

Money Div(Money l, Money r)
{
	Money t;
	if (r.getA() != 0 && r.getB() != 0)
	{
		t.setA(l.getA() / r.getA());

		t.setB(l.getB() / r.getB());
	}
	return t;
}

Money DivD(Money l, double dr)
{
	Money t;
	if (dr != 0)
	{
		t.setA(l.getA() / dr);

		t.setB(l.getB() / dr);
	}
	return t;
}

Money::Money(const long x, const unsigned int y)
{
	int a = x;
	int b = y;
	setA(a);
	setB(b);
}

Money::Money(const Money& r)
{
	int a =r.getA();
	int b =r.getB();

	setA(a);
	setB(b);
}

void Money::Init(long a, unsigned int b)
{
	setA(a);
	setB(b);
}

void Money::Read()
{
	long x;
	unsigned int y;
	cout << "Input suma :" << endl;
	cout << "UAH ="; cin >> x;
	cout << "Coin ="; cin >> y;
	Init(x, y);
}

void Money::Display() const
{
	cout << endl;
	cout << getA() << "," << getB() << endl;
}
