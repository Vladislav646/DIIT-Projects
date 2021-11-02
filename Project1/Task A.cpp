#include <iostream>		 
// введення/виведення
#include <Windows.h>	

#include <math.h> 

#define _USE_MATH_DEFINES

#define M_PI

#include <cmath>

using namespace std; 	
						
int main()	
{
	// підтримка кирилиці в консолі Windows
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// введення даних
	double R;	
	cout << "Введіть радіус циліндра: ";
	cin >> R;

	double H;
	cout << "Введіть висоту циліндра: ";
	cin >> H;

	// перевірка на дурня
	if (H <= 0) {
		cout << "Error\n";
	}

	else if (R <= 0) {
		cout << "Error\n";
	}

	// рахуємо площу циліндра
	double CS;
	CS = 2 * M_PI R * (H + R);
	
	// вхідні дані куба
	double A;
	cout << "Введіть сторону куба: ";
	cin >> A;

	// перевірка на дурня
	if (A <= 0) {
		cout << "Error\n";
	}

	// рахуємо площу куба
	double SA;
	SA = 6 * (int)A ^ 2;

	// рахуємо площу куба та циліндра
	double S;
	S = CS + SA;

	// рахуємо об'єм циліндра
	double VC;
	VC = M_PI R * 2 * H;
	
	// рахуємо об'єм куба
	double VA;
	VA = (int)A ^ 3;

	// рахуємо об'єм куба та циліндра
	double V;
	V = VC + VA;

	// результат
	cout << "Площа отриманої фігури: " << S << "\n";
	cout << "Об'єм отриманої фігури: " << V << "\n";

	system("pause"); // затримка для перегляду результату
	return 0; // вихід з функції main()
}
