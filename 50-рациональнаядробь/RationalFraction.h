#pragma once
class RationalFraction
{
    int chislitel, znamenatel;

public:
    RationalFraction();
    void reduce();// ���������� ����� 
    void show();// ����� ����� 
    ~RationalFraction();
};

