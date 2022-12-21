#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int n, a, s;
    bool flag = false;
    cin >> n;
    cin >> s;
    while (n > 0)
    {
        a = n % 10;

        if (a == s)
        {
            flag = true;
        }
        if (n >= 10)
        {
            n = n / 10;
        }
        else
        {
            break;
        }
    }
    if (flag == true)
    {
        std::cout << "Цифра S найдена" << std::endl;
    }
    else
    {
        std::cout << "Цифра S не найдена" << std::endl;
    }
}