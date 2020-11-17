#include <iostream>
#include "A.h"
using namespace std;

void A::get()
{
	cout << "Class_A input:";
	cin >> num;
}

void B::get()
{
	cout << "Class_B input:";
	cin >> num;
}

void C::get()
{
	cout << "Class_C input:";
	cin >> num;
}

void C::show() const
{
	cout << "Class_C output:" << num << '\n';
}

void B::show() const
{
	cout << "Class_B output:" << num << '\n';
}

void A::show() const
{
	cout << "Class_A output:" << num << '\n';
}

int main()
{
	A a1;
	B b1;
	C c;
	a1.get();
	b1.get();
	c.get();
	c.show();
	b1.show();
	a1.show();
	return 0;
}