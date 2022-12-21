#include <iostream>
using namespace std;
int main()
{
    int n;
    int k, sum = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        tmp = 1;
        for (int j = 0; j <= i * i; j++)
        {
            k *=i + j;
        }
        sum += k;
    }
    cout << sum << endl;
}
