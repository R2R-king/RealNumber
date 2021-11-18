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
	 c.x = x + d.x;//действительная часть 
	 c.y = y + d.y;// мнимая часть 
		 
	 return c;
	
}

void ComplexNUmber::add2(ComplexNUmber d)
{

	x = x + d.x;//действительная часть 
	y = y + d.y;// мнимая часть 

}




