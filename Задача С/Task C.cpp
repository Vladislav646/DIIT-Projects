#include <iostream>		 
// �������� �����/������ � ������ 
#include <Windows.h>	

#include <math.h> 

#define _USE_MATH_DEFINES

#define M_PI

#include <cmath>

using namespace std;

int main() 
{

	// ������������ �������� � Windows 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ������� ��� �������� a �� b
	double a;
	cout << "������ ��� �������� � �� b \n";
	cout << "������ ��� �������� ������� �: ";
	cin >> a;

	double b;
	cout << "������ ��� �������� ������� b: ";
	cin >> b;

	// ������� ��� �������� p �� q
	double p;
	cout << "������ ��� �������� p �� q \n";
	cout << "������ ��� �������� ������� p: ";
	cin >> p;

	double q;
	cout << "������ ��� �������� ������� q: ";
	cin >> q;

	// ������� ��� �������� r �� s
	double r;
	cout << "������ ��� �������� r �� s \n";
	cout << "������ ��� �������� ������� r: ";
	cin >> r;

	double s;
	cout << "������ ��� �������� ������� s: ";
	cin >> s;

	// �������� ��������
	double num, num1, num2, num3;

	num1 = a * b;
	num2 = p * q;
	num3 = r * s;

	num = num2 + num3;

	if (num1 > num) {

		cout << "������������ ������� ������� \n";
	}
	else {

		cout << "������������ ������� ��������� \n";
	}

	system("pause");
	return 0;
}