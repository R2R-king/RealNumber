#include "50RF.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;


void RealNum::init(int p, int q)
{
	if (q != 0)
	{
		this->p = p;
		this->q = q;

		//переменные ссылочного типа !!!!!!!!!!!
	}
	else
	{
		cout << "ERROR";
		exit(0);
	}
}

void RealNum::write()
{
    if (q == 1)
    {
        cout << p << endl;
    }
    else
	cout << p << " / "<< q << endl;

}

RealNum RealNum::Plus(RealNum c) //реализация ф-ции сложения дробей	
{
	RealNum d;
	d.p = p*c.q + q * c.p; //числитель
	d.q = q*c.q; // знаменатель 
    d.reduce();
	return d ;
}

RealNum RealNum::Minus(RealNum c)
{
	RealNum d;
	d.p = p * c.q - q*c.p;
	d.q = q * c.q;
	return d;
}

void RealNum::reduce() // сокращение дроби 
{
    if (p < q)
    {
        for (int i = 2; i <= q; i++)
        {
            if (p % i == 0 && q % i == 0)
            {
                p = p / i;
                q = q / i;

            }
        }
    }
    else
    {
        for (int i = 2; i <= p; i++)
        {
            if (p % i == 0 && q % i == 0)
            {
                p /= i;
                q = q / i;

            }
        }
    }

    if (p == q)
    {
        p = 1;
        q = 1;
   }

   
}

void RealNum::add2(RealNum c) // сложение 2
{
    
    p = p * c.q;
    c.p = c.p* q;
    p = p + c.p;
    q = q * c.q;
    
    reduce();
   
}

void RealNum::sub2(RealNum c) // вычитание2
{

    p = p * c.q;
    c.p = c.p * q;
    p = p - c.p;
    q = q * c.q;
    reduce();


 
}

RealNum RealNum::mult(RealNum c) // умножение дробей 
{
    RealNum d;
    d.p = p * c.p;
    d.q = q * c.q;

    d.reduce();
    return d ;
}

void RealNum::mult2(RealNum c) //умножение
{

    p = p * c.p;
    q = q * c.q;
    reduce();

}

RealNum RealNum::div(RealNum c) // деление 
{
    RealNum d;

    d.p = p * c.q;
    d.q = q * c.p;

    d.reduce();
    return d;
}

void RealNum::div2(RealNum c)
{
    p = p * c.q;
    q = q * c.p;
    reduce();
}

int RealNum::numberPart(RealNum c)
{

   int x = p / q;
    return x;
}

//double RealNum::value(RealNum c )
//{
//    
//    
//
//    
//
//    return modf;
//}


//string RealNum::toString() // строковое представление 
//{
//    
//
//
//
//
//    return string();
//}

//bool RealNum::Sravnenie()
//{
//    bool f = (p * q >= 0);
//    if (!f)
//        if (q < 0)
//            q = -q;
//        else if (p < 0)
//            p = -p;
//    return f;
//
//}


















