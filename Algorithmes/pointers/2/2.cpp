#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    int n1, n2,* ptr1, * ptr2;
    std::cin >> n1;
    ptr1 = &n1;
    std::cin >> n2;
    ptr2 = &n2;
    std::cout << "Сумма: " << *ptr1 + *ptr2 << std::endl;
}