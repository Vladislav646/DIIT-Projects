#include <iostream>

#include <Windows.h>

using namespace std;

int main() {

    // використання кирилиці в Windows
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int n = 0;
    int a, b, c;

    cout << "Введите трехзначное целое число: ";
    cin >> n;
    
    // основні підрахунки 
    a = n / 100;
    b = (n % 100) / 10;
    c = n % 10;

    // вивод на екран
    cout << a << b << b << c << "\n";

    system("pause");
    return 0;
}