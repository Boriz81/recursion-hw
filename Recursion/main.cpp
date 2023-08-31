#include<iostream>
using namespace std;

void elevator(int floor);
int Factorial(int n);
double Power(double a, int n);
int Fibonac�i(int n);

void main()

{
	setlocale(LC_ALL, "");
	/*cout << "Hello world";
	main();*/

	//------------------------------ elevator ------------------------------//

	int n;
	cout << "������� ����� �����: "; cin >> n;
	elevator(n);

	//------------------------------ ��������� -----------------------------//
	
	int a;
	cout << "������� �����, ��� ���������� ���������� ����� �����: "; cin >> a;
	
	cout << "��������� ���������� �����: " << Factorial(a) << endl;

	//------------------------------ double Power --------------------------//

	double b; 
	int c;
	cout << "������� �����, ��� ���������� ����� � �������: "; cin >> b;
	cout << "������� �������, ��� ���������� ���������� ����� � �������: "; cin >> c;
	cout << "����� ������������ ����� � �������: " << Power(b, c) << endl;

	//------------------------------ Fibonachi -----------------------------//

	int d;
	cout << "������� �����, ��� ���������� ���� ���������, ���������� �����: "; cin >> d;

	cout << "��� ��������� ���������� �����: " << Fibonac�i(d) << endl;

}

//------------------------------ ��������� -----------------------------//

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

int Fibonac�i(int a)
{
	if (a < 2) return a;

	return Fibonac�i(a-1) + Fibonac�i(a-2);
}

//------------------------------ elevator ------------------------------//

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << " �� �����\n";
	elevator(floor - 1);
	cout << "�� �� " << floor << " �� �����\n";
}