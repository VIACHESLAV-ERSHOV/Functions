#include<iostream>
using namespace std;

//#define KLASWORK
int Sum(int a, int b);        // прототип функции (объявление функции - Fuction declaration)
int Diff(int a, int b);
int Prod(int a, int b);
double Qout(int a, int b);

//double Factorial(int n);
//double Power(double a, int n);

#define CLASSWORK
//#define FACTORIAL
//#define POWER

void main()
{
	setlocale(LC_ALL, "");

#ifdef CLASSWORK
	cout << "Hello Functions" << endl;
	int a, b;
	cout << "введите два числа: "; cin >> a >> b;
	int c = Sum(a, b);         // вызов использование функции - Fuction call
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Qout(a, b) << endl;
#endif // CLASSWORK

#ifdef FACTORIAL
	int n;
	cout << "Введите число: "; cin >> n;
	cout << n << "! = " << Factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;
	int n;
	cout << "Основание степени: "; cin >> a;
	cout << "Показатель степени: "; cin >> n;
	cout << "Результат: " << Power(a, n) << endl;
#endif // POWER

	main();
}

int Sum(int a, int b)  // реализация функции ( определение функции - Fuction definition)
{
	int c = a + b;
	return c;
}
int Diff(int a, int b)
{
	// Difference - разность
	return a - b;
}
int Prod(int a, int b)
{
	// Product - произведеление
	return a * b;
}
double Qout(int a, int b)
{
	//Qoutient - частное
	return (double)a / b;
}

double Factorial(int n)
{
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}
double Power(double a, int n)
{
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}

