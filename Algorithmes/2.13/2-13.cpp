#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    float a, b, c, x1 = 0, x2 = 0, x = 0, d;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    d = b * b - (4 * a * c);
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1: " << x1 << endl;
        cout << "x2: " << x2 << endl;
    }
    else if (d == 0)
    {
        x = ((-1) * b) / 2 * a;
        cout << "x: " << x1 << endl;
    }
    else
    {
        cout << "Корней нет" << endl;
    }
}