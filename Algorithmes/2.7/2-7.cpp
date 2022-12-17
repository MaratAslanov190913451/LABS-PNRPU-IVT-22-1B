#include <iostream>
using namespace std;
int main()
{
    int n, length;

    cin >> n;

    length = sqrt(n);

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
    cout << endl;
    for (int i = 0; i < n - 2; i++)
    {
        cout << "* ";
        for (int j = 0; j < (n - 2) * 2; j++)
        {
            cout << ' ';
        }
        cout << "* ";
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
    cout << endl;
}