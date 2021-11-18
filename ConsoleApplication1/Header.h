#pragma once

class ComplexNumber
{
private:
	int x, y;
public:
	void init(int a, int b);
	void show();
	ComplexNumber add(ComplexNumber d);
	void add2(ComplexNumber d);


};
