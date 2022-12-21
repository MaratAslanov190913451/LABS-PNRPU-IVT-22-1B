#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    int n, fact = 1,* f = &fact;
    std::cout << "N: " << std::endl;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        *f = *f * i;
    }
    std::cout << "'N!': " << fact << std::endl;
}