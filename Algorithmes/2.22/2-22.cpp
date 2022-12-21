#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    float x, n, max, count = 1;
    std::cin >> n;
    max = sin(n + 1 / n);
    std::cout << max << std::endl;
    for (int i = 2; i <= n; i++)
    {
        x = sin(n + i / n);
        std::cout << x << std::endl;
        if (x > max)
        {
            count = i;
            max = x;
        }
    }
    std::cout << "Максимальный элемент: " << max << std::endl;
    std::cout << "Номер: " << count << std::endl;
}