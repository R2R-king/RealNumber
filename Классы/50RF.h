#pragma once

using namespace std;

class RealNum
{
private:
	int p, q;

public:
	//конструкторы . прототипы
	void init(int a, int b); // инициализация
	void write();
	RealNum Plus(RealNum c); // будем прибавлять действ число С
	RealNum Minus(RealNum c);
	void reduce();
	//
	void add2(RealNum c);
	void sub2(RealNum c);
	RealNum mult(RealNum c);
	void mult2(RealNum c);
	RealNum div(RealNum c);
	void div2(RealNum c);

	/*double value();*/

	//bool Sravnenie();
	
	int numberPart(RealNum c);
	
	




};