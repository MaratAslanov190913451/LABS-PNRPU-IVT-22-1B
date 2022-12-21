#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    int n1, n2, tmp,* ptr1, * ptr2;
    std::cin >> n1;
    ptr1 = &n1;
    tmp = *ptr1;
    std::cin >> n2;
    ptr2 = &n2;
    n1 = *ptr2;
    n2 = tmp;
    std::cout << "Первая переменная: " << n1 << std::endl;
    std::cout << "Вторая переменная: " << n2 << std::endl;
}