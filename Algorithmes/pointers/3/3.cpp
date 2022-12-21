#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    float n1, n2, * ptr1, * ptr2, sum = 0;
    std::cin >> n1;
    ptr1 = &n1;
    std::cin >> n2;
    ptr2 = &n2;
    sum = *ptr1 + *ptr2;
    std::cout << "Сумма: " << sum << std::endl;
}