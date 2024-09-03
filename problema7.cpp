#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
float f(float x)
{
    return x * x - sin(x);
}
int main()
{
    float a, b, h, n, i, aria = 0, integrala = 0;

    cin >> a >> b;
    cin >> n;
    if (a > b)
        cout << "Datele introduse nu corespund cerintei";
    else
    {
        h = (abs(b - a)) / n;
        for (i = a;i <= b;i += h)
        {
            aria = f((i + i + h) / 2) * h;
            integrala = integrala + aria;

        }
        cout << integrala;
    }
    return 0;
}