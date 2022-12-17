#include <iostream>
using namespace std;
int main()
{
    int n, space;
     
    cin >> n;
    space = n;

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < space; j++)
        {
            std::cout << ' ';
        }
        for (int j = 0; j < i; j++)
        {
            std::cout << '*';
        }
        cout << endl;
        space--;
    }
}