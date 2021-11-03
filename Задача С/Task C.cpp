#include <iostream>		 
// п≥дтримка вводу/виводу с консол≥ 
#include <Windows.h>	

#include <math.h> 

#define _USE_MATH_DEFINES

#define M_PI

#include <cmath>

using namespace std;

int main() 
{

	// використанн€ кирилиц≥ в Windows 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// «читуЇмо дан≥ забудови a на b
	double a;
	cout << "¬вед≥ть дан≥ забудови а на b \n";
	cout << "¬вед≥ть дан≥ забудови сторона а: ";
	cin >> a;

	double b;
	cout << "¬вед≥ть дан≥ забудови сторона b: ";
	cin >> b;

	// «читуЇмо дан≥ забудови p на q
	double p;
	cout << "¬вед≥ть дан≥ забудови p на q \n";
	cout << "¬вед≥ть дан≥ забудови сторона p: ";
	cin >> p;

	double q;
	cout << "¬вед≥ть дан≥ забудови сторона q: ";
	cin >> q;

	// «читуЇмо дан≥ забудови r на s
	double r;
	cout << "¬вед≥ть дан≥ забудови r на s \n";
	cout << "¬вед≥ть дан≥ забудови сторона r: ";
	cin >> r;

	double s;
	cout << "¬вед≥ть дан≥ забудови сторона s: ";
	cin >> s;

	// ¬иконуЇмо операц≥њ
	double num, num1, num2, num3;

	num1 = a * b;
	num2 = p * q;
	num3 = r * s;

	num = num2 + num3;

	if (num1 > num) {

		cout << "розташуванн€ будинк≥в можливе \n";
	}
	else {

		cout << "розташуванн€ будинк≥в неможливе \n";
	}

	system("pause");
	return 0;
}