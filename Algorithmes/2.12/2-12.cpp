#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int range, max, min, n;
    cout << "Введите длину последовательности: " << endl;
    cin >> range;
    cout << "Введите первое число: " << endl;
    cin >> n;
    max = n;
    min = n;
    for (int i = 1; i <= range - 1; i++)
    {
        cout << "Введите следующее число:" << endl;
        cin >> n;

        if (n > max)
        {
            max = n;
        }
        else if (n < min)
        {
            min = n;
        }
    }
    cout << "Сумма минимального и максимального числа: " << max + min << endl;
}