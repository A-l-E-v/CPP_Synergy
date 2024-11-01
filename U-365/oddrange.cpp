// Пользователь вводит 2 целых числа, которые задают диапазон. Через пробел
// вывести в консоль все нечётные числа из этого диапазона.

// https://github.com/A-l-E-v/CPP_Synergy/blob/main/U-365/oddrange.cpp

#include <iostream>

using namespace std;

int main()
{
    int a, b, x, y, ndx;
    cout << "--- Нечётные числа диапазона ---\n\n";
    cout << "Введите первую границу диапазона: ";
    cin >> x;
    cout << "Введите вторую границу диапазона: ";
    cin >> y;

    // Определяем диапазон слева направо
    if (y >= x)
    {
        a = x;
        b = y;
    }
    else
    {
        a = y;
        b = x;
    }

    for (int ndx = a; ndx <= b; ndx++)
    {
        if (ndx % 2 != 0)
        {
            cout << ndx << " ";
        };
    }
    cout << "\n";
}
