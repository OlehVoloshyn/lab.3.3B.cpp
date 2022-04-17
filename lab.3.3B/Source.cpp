#include"Money.h"
#include<iostream>

using namespace std;

int main()
{

	Money a(1, 2), b, c, d, f;
	double dr;

	Money q(a);
	
	cout << "Input suma :" << endl;
	cin >> a;
	cout << endl;
	cin >> b;
	cout << "suma = " << Add(a, b) << endl;
	cout << endl;


	cout << "Div :" << endl;
	cout << "Div = " << Div(a, b) << endl;

	cout << "drib ="; cin >> dr;
	cout << "DivD :" << endl;
	cout << "DivD = " << DivD(a, dr) << endl;

	cout << "Dqqq = " << (a == b) << endl;

	return 0;
}