#pragma once
class RationalFraction
{
    int chislitel, znamenatel;

public:
    RationalFraction();
    void reduce();// сокращение дроби 
    void show();// показ дроби 
    ~RationalFraction();
};

