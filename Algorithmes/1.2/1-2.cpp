﻿#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    float a, b;

    cin >> a >> b;

    if (b == 0)
    {
        cout << "На ноль делить нельзя!" << endl;
    }
    else
    {
        cout << a / b << endl;
    }

}
