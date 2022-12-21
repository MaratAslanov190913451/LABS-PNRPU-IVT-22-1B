#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int sum = 0, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2 == 1) or (i == 1))
        {
            sum += (-1) * i;
        }
        else
        {
            sum += i;
        }
    }
    cout << "Сумма S: " << sum << endl;
}