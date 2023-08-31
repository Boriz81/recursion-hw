#include<iostream>
using namespace std;

void elevator(int floor);
int Factorial(int n);
double Power(double a, int n);
int Fibonacсi(int n);

void main()

{
	setlocale(LC_ALL, "");
	/*cout << "Hello world";
	main();*/

	//------------------------------ elevator ------------------------------//

	int n;
	cout << "Введите номер этажа: "; cin >> n;
	elevator(n);

	//------------------------------ Факториал -----------------------------//
	
	int a;
	cout << "Введите число, для вычисления факториала этого числа: "; cin >> a;
	
	cout << "Факториал введенного числа: " << Factorial(a) << endl;

	//------------------------------ double Power --------------------------//

	double b; 
	int c;
	cout << "Введите число, для возведения числа в степень: "; cin >> b;
	cout << "Введите степень, для возведения введенного числа в степень: "; cin >> c;
	cout << "Вывод возведенного числа в степень: " << Power(b, c) << endl;

	//------------------------------ Fibonachi -----------------------------//

	int d;
	cout << "Введите число, для вычисления ряда Фибоначчи, введенного числа: "; cin >> d;

	cout << "Ряд Фибоначчи введенного числа: " << Fibonacсi(d) << endl;

}

//------------------------------ Факториал -----------------------------//

int Factorial(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;

	
	return n * Factorial(n - 1);
}

//------------------------------ double Power --------------------------//

double Power(double a, int n)
{
	if (n == 0) return 1;
	if (n % 2 == 1)
		return a * Power(a, n - 1);
	else
		return Power(a*a, n/2);
}

//------------------------------ Fibonachi -----------------------------//

int Fibonacсi(int a)
{
	if (a < 2) return a;

	return Fibonacсi(a-1) + Fibonacсi(a-2);
}

//------------------------------ elevator ------------------------------//

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " на этаже\n";
	elevator(floor - 1);
	cout << "Вы на " << floor << " на этаже\n";
}