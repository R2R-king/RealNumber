#include <iostream>
#include "CN.h"

using namespace std;

void ComplexNUmber::init(int a, int b)
{
	x = a;
	y = b;
}

void ComplexNUmber::show()
{
	cout << x << " + " << " i * " << y;
}

ComplexNUmber ComplexNUmber::add(ComplexNUmber d)
{
	 ComplexNUmber c;
	 c.x = x + d.x;//�������������� ����� 
	 c.y = y + d.y;// ������ ����� 
		 
	 return c;
	
}

void ComplexNUmber::add2(ComplexNUmber d)
{

	x = x + d.x;//�������������� ����� 
	y = y + d.y;// ������ ����� 

}




