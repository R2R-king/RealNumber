#include <iostream>
#include "RationalFraction.h"

using namespace std;

class RationalFraction
{
    int chislitel, znamenatel;

public:
    RationalFraction() // конструктор без параметров 
    {
        cout << "введите числа А и В" << endl;

        cin >> chislitel >> znamenatel;

    }
    RationalFraction(const int& chislitel, const int& znamenatel) // конструктор с параметрами 
    {
        this->chislitel = chislitel;
        this->znamenatel = znamenatel;

    }
    void reduce() // сокращение дроби 
    {
        if (chislitel < znamenatel)
        {
            for (int i = 2; i <= znamenatel; i++)
            {
                if (chislitel % i == 0 && znamenatel % i == 0)
                {
                    chislitel = chislitel / i;
                    znamenatel = znamenatel / i;

                }
            }
        }
        else
        {
            for (int i = 2; i <= chislitel; i++)
            {
                if (chislitel % i == 0 && znamenatel % i == 0)
                {
                    chislitel /= i;
                    znamenatel = znamenatel / i;

                }
            }
        }
    }
    void show() // показ дроби 
    {
        if (znamenatel != 1)
        {
            cout << chislitel << "/" << znamenatel << endl;
        }
        else
        {
            cout << chislitel << endl;
        }
    }
    ~RationalFraction()
    {};

};