#include<sstream>
#include "Pair.h"

Pair operator > (const Pair& p1, const Pair& p2)
{
    if ((p1.a > p2.a) || (p1.a == p2.a) && (p1.b > p2.b))
    return true;
	else
	{
		return false;
	}
}

Pair operator<(const Pair& p1, const Pair& p2)
{
	if ((p1.a < p2.a) || (p1.a == p2.a) && (p1.b < p2.b))
		return true;
	else
	{
		return false;
	}
}

Pair operator>=(const Pair& p1, const Pair& p2)
{
	if ((p1.a >= p2.a) || (p1.a == p2.a) && (p1.b >= p2.b))
		return true;
	else
	{
		return false;
	}
}

Pair operator<=(const Pair& p1, const Pair& p2)
{
	if ((p1.a <= p2.a) || (p1.a == p2.a) && (p1.b <= p2.b))
		return true;
	else
	{
		return false;
	}
}

Pair operator==(const Pair& p1, const Pair& p2)
{
	if ((p1.a == p2.a) || (p1.a == p2.a) && (p1.b == p2.b))
		return true;
	else
	{
		return false;
	}
}

Pair operator!=(const Pair& p1, const Pair& p2)
{
	if ((p1.a != p2.a) || (p1.a == p2.a) && (p1.b != p2.b))
		return true;
	else
	{
		return false;
	}
}

ostream& operator<<(ostream& out, const Pair& r)
{
	return out <<(string)r;
}

istream& operator>>(istream& in , Pair& r )
{
	int a, b;
	cout << "uah = "; in >> a;
	cout << "coin = "; in >> b;

	r.setA(a);
	r.setB(b);
	return in;

}

Pair::Pair(const int x, const int y)
	: a(x), b(y)

{
}

Pair::Pair(const Pair& r)
{
	a =r.a;
	b =r.b;

}

Pair::operator string() const
{
	stringstream ss;
	ss << "( " << getA() << ", " << getB() << " )"
		;
	return ss.str();
}

