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
	
	cout << "100гр сиру коштує 60 грн \n";

	cout << " цикл for \n";

	// цикл for
	for (int i = 50; i <= 1000; i += 50) {

		int sum;
		sum = i * 30;
		cout << "\n Грамів сиру: " << i << " ціна: " << sum ;
		
		
	}

	cout << " цикл while \n";

	// цикл while
	int y = 50;
	while (y <= 1000) {
		int sum;
		sum = y * 30;
		cout << "\n Грамів сиру: " << y << " ціна: " << sum ;
		y += 50;
		
	}

	cout << " цикл do while \n";

	// цикл do while
	int x = 50;
	do  {
		int sum;
		sum = x * 30;
		cout << "\n Грамів сиру: " << x << " ціна: " << sum ;
		x += 50;
		
	} while (x <= 1000);

	system("pause");
	return 0;
}