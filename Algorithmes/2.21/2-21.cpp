#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    float n, f;
    bool flag = true;
    std::cout << "Числа вводятся с клавиатуры до тех пор, пока не встретится число 0 (0 — признак окончания ввода). " << std::endl;
    std::cin >> f;
    while (f != 0)
    {
        std::cin >> n;
        if (n < f && n != 0)
        {
            flag = false;
        }
        f = n;
    }
    if (flag)
    {
        std::cout << "Числа идут по возрастанию" << std::endl;
    }
    else
    {
        std::cout << "Числа не идут по возрастанию" << std::endl;
    }
}