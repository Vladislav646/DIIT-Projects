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
	
	cout << "100�� ���� ����� 60 ��� \n";

	cout << " ���� for \n";

	// ���� for
	for (int i = 50; i <= 1000; i += 50) {

		int sum;
		sum = i * 30;
		cout << "\n ����� ����: " << i << " ����: " << sum ;
		
		
	}

	cout << " ���� while \n";

	// ���� while
	int y = 50;
	while (y <= 1000) {
		int sum;
		sum = y * 30;
		cout << "\n ����� ����: " << y << " ����: " << sum ;
		y += 50;
		
	}

	cout << " ���� do while \n";

	// ���� do while
	int x = 50;
	do  {
		int sum;
		sum = x * 30;
		cout << "\n ����� ����: " << x << " ����: " << sum ;
		x += 50;
		
	} while (x <= 1000);

	system("pause");
	return 0;
}