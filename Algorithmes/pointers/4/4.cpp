#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    int range, n, max, min,* ptr;
    std::cout << "Range:" << std::endl;
    std::cin >> range;
    std::cout << "Введите первое число:" << std::endl;
    std::cin >> n;
    ptr = &n;
    max = *ptr;
    min = *ptr;
    for (int i = 0; i < range - 1; i++)
    {
        std::cin >> n;
        ptr = &n;
        if (*ptr > max)
        {
            max = *ptr;
        }
        if (*ptr < min)
        {
            min = *ptr;
        }
    }
    std::cout << "Max: " << max << std::endl;
    std::cout << "Min: " << min << std::endl;
}