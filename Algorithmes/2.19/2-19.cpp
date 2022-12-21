#include <iostream>

int main()
{
    int n, sum = 0;
    std::cout << "N:" << std::endl;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
}