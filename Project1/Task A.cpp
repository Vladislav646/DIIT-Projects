#include <iostream>		 
// ��������/���������
#include <Windows.h>	

#include <math.h> 

#define _USE_MATH_DEFINES

#define M_PI

#include <cmath>

using namespace std; 	
						
int main()	
{
	// �������� �������� � ������ Windows
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// �������� �����
	double R;	
	cout << "������ ����� �������: ";
	cin >> R;

	double H;
	cout << "������ ������ �������: ";
	cin >> H;

	// �������� �� �����
	if (H <= 0) {
		cout << "Error\n";
	}

	else if (R <= 0) {
		cout << "Error\n";
	}

	// ������ ����� �������
	double CS;
	CS = 2 * M_PI R * (H + R);
	
	// ����� ��� ����
	double A;
	cout << "������ ������� ����: ";
	cin >> A;

	// �������� �� �����
	if (A <= 0) {
		cout << "Error\n";
	}

	// ������ ����� ����
	double SA;
	SA = 6 * (int)A ^ 2;

	// ������ ����� ���� �� �������
	double S;
	S = CS + SA;

	// ������ ��'�� �������
	double VC;
	VC = M_PI R * 2 * H;
	
	// ������ ��'�� ����
	double VA;
	VA = (int)A ^ 3;

	// ������ ��'�� ���� �� �������
	double V;
	V = VC + VA;

	// ���������
	cout << "����� �������� ������: " << S << "\n";
	cout << "��'�� �������� ������: " << V << "\n";

	system("pause"); // �������� ��� ��������� ����������
	return 0; // ����� � ������� main()
}
