// Классы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

// 50 рациональная дробь

#include <fstream>
#include <iostream>
#include "50RF.h"
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");

	RealNum x, y, z;

	int a, b;
	ifstream myin("text.txt");

	cin >> a >> b;

	x.init(a, b);
	/*cout << x.a*/ //так выводить нельзя
	x.write(); // наш вывод
	
	cin	>> a >> b;
	y.init(a, b);
	y.write();

	//Сложение дробей
	//z = x.Plus(y);
	//z.write();

	/*// Вычитание двух дробей
	z = x.Minus(y);
	z.write();
	*/

	//Сокращение дроби

	/*x.reduce();
	x.write();*/

	//умножение 1
	/*z = x.mult(y);
	z.write();*/

	//умножение 2

	/*x.mult2(y);
	x.write();*/

	//деление
	/*z = x.div(y);
	z.write();*/

	//x.value();
	
	x.numberPart(y);
	x.write();

	
	

	system("pause");

	return 0;
}