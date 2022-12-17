#include <iostream>
using namespace std;
int main()
{
    int n, space = 0;

    cin >> n;

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < space; j++)
        {
            std::cout << ' ';
        }
        for (int j = 0; j < n - i; j++)
        {
            std::cout << '*';
        }
        cout << endl;
        space++;
    }
}