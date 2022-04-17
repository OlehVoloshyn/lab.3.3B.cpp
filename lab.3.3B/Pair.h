#include<iostream>

#pragma once
using namespace std;
class Pair
{
	int a, b;
public:
	Pair(const int x = 0, const int y = 0);
	Pair(const Pair& r);
	~Pair(void) {};

	int getA() const { return a; }
	int getB() const { return b; }
	void setA(const int a) { this->a = a; }
	void setB(const int b) { this->b = b; }

	friend Pair operator > (const Pair& p1, const Pair& p2);
	friend Pair operator < (const Pair& p1, const Pair& p2);
	friend Pair operator >= (const Pair& p1, const Pair& p2);
	friend Pair operator <= (const Pair& p1, const Pair& p2);
	friend Pair operator == (const Pair& p1, const Pair& p2);
	friend Pair operator != (const Pair& p1, const Pair& p2);

	friend ostream& operator <<(ostream&, const Pair&);
	friend istream& operator >>(istream&, Pair&);

	operator string() const;
};

