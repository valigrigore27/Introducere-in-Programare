#include <iostream>
using namespace std;
int main()
{
    int n, p = 24, i, x;
    cin >> n;
    for (i = 10;i <= 1000;i++)
    {
        if (n == i) { cout << p % 1000 / 100 << ' ' << p % 100 / 10 << ' ' << p % 10;return 0; }
        p = p * 2;
        p = p % 1000;
    }
}