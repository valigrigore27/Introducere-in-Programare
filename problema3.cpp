#include <iostream>
using namespace std;
float f(float x)
{
    return x * x - 3;
}
int main()
{
    float a, b, m;
    float epsilon = 0.0001;
    bool ok = false;
    cin >> a >> b;
    if (f(a) * f(b) >= 0 || a > b)
        cout << "Datele de intrare nu verifica conditiile problemei";
    else
        while (!ok)
        {
            m = (a + b) / 2.0;
            if (f(m) < epsilon && f(m) > -epsilon)
                ok = true;
            else if (f(a) * f(m) < 0)
                b = m;
            else
                a = m;


        }

    cout << m;

    return 0;
}
