#include <iostream>

using namespace std;


int main(void)
{
	char num1[80], num2[80];
	printf("Enter first number: ");
	cin >> num1;
	printf("Enter second number: ");
	cin>> num2 ;
	printf("The sum is: %d", atoi(num1) + atoi(num2));
	return 0;
}

