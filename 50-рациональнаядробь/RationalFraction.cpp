#include <iostream>
#include "RationalFraction.h"

using namespace std;

class RationalFraction
{
    int chislitel, znamenatel;

public:
    RationalFraction() // ����������� ��� ���������� 
    {
        cout << "������� ����� � � �" << endl;

        cin >> chislitel >> znamenatel;

    }
    RationalFraction(const int& chislitel, const int& znamenatel) // ����������� � ����������� 
    {
        this->chislitel = chislitel;
        this->znamenatel = znamenatel;

    }
    void reduce() // ���������� ����� 
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
    void show() // ����� ����� 
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