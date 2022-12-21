#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int num, max, min, n;
    cout << "Введите количество чисел последовательности: " << endl;
    cin >> n;
    cout << "Введите первое число: " << endl;
    cin >> num;
    max = num;
    min = num;
    for (int i = 1; i <= n - 1; i++)
    {
        cout << "Введите следующее число:" << endl;
        cin >> num;

        if (num > max)
        {
            max = num;
        }
        else if (num < min)
        {
            min = num;
        }
    }
    cout << "Сумма минимального и максимального числа: " << max + min << endl;
}
