#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    int n, * ptr = &n;
    std::cout << "n: " << std::endl;
    std::cin >> *ptr;
    std::cout << n << std::endl;
}