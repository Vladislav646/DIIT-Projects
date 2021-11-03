#include <iostream>		 
// підтримка вводу/виводу с консолі 
#include <Windows.h>	

#include <math.h> 

#define _USE_MATH_DEFINES

#define M_PI

#include <cmath>

using namespace std;

int main()
{
	// використання кирилиці в Windows 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Зчитування даних циліндра
	double R;
	cout << "Введіть радіус циліндра: ";
	cin >> R;

	double H;
	cout << "Введіть висоту циліндра: ";
	cin >> H;

	// Перевірка на дурня
	if (H <= 0) {
		cout << "Error\n";
	}

	else if (R <= 0) {
		cout << "Error\n";
	}

	// рахуємо площу циліндра
	double CS;
	CS = 2 * M_PI R * (H + R);

	// Зчитуємо дані куба
	double A;
	cout << "Введіть сторону куба: ";
	cin >> A;

	// перевірка на дурня
	if (A <= 0) {
		cout << "Error\n";
	}

	// рахуємо площу циліндра
	double SA;
	SA = 6 * (int)A ^ 2;

	// рахуємо площу циліндра та куба
	double S;
	S = CS + SA;

	// рахуємо об'єм циліндра
	double VC;
	VC = M_PI R * 2 * H;

	// рахуємо об'єм куба
	double VA;
	VA = (int)A ^ 3;

	//ахуємо об'єм куба та циліндра
	double V;
	V = VC + VA;

	// результати 
	cout << "Площа заданої фігури: " << S << "\n";
	cout << "об'єм заданої фігури: " << V << "\n";

	system("pause"); 
	return 0; 
}