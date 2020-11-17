#include<iostream>
using namespace std;
#pragma once
class A
{
private:
	int num;
public:
	A() { num = 0; }
	~A() {}
	A(int a) { num = a; }
	virtual void get();
	virtual void show() const;
};

class B :public A
{
private:
	int num;
public:
	B() { num = 0; }
	~B() {}
	B(int b) { num = b; }
	virtual void get();
	virtual void show() const;
};

class C : public A
{
private:
	int num;
public:
	C() { num = 0; }
	~C() {}
	C(int c1) { num = c1; }
	virtual void get();
	virtual void show() const;
};