#include <iostream>

#include <Windows.h>

using namespace std;

int main() {

    // ������������ �������� � Windows
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int n = 0;
    int a, b, c;

    cout << "������� ����������� ����� �����: ";
    cin >> n;
    
    // ������ ��������� 
    a = n / 100;
    b = (n % 100) / 10;
    c = n % 10;

    // ����� �� �����
    cout << a << b << b << c << "\n";

    system("pause");
    return 0;
}