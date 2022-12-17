#include <iostream>
using namespace std;
int main()
{
    int n, space, stars = 1;

    cin >> n;

    space = n / 2;

    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0; j < space; j++)
        {
            std::cout << ' ';
        }
        for (int j = 0; j < stars; j++)
        {
            std::cout << '*';
        }
        space--;
        stars += 2;
        cout << endl;
    }
}
