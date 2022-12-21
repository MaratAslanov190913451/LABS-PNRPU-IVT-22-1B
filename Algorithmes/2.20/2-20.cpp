#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Rus");
    float x, n, s, i = 1;
    bool flag = false;
    std::cout << "n: " << std::endl;
    std::cin >> n;
    std::cout << "s: " << std::endl;
    std::cin >> s;
    while ((i <= n) && (flag == false))
    {
        x = sin(n + i / n);
        x = round(x * 10) / 10;
        if (x == s)
        {
            flag = true;
        }
        i++;
    }
    if (flag == true)
    {
        std::cout << "s найдено" << std::endl;
    }
    else
    {
        std::cout << "s не найдено" << std::endl;
    }
}