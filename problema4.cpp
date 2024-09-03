#include <iostream>
#include <math.h>
using namespace std;
float radacina_patrata(float x)
{
    float a, b, dif, epsilon = 0.000001, copie_a;
    a = 1;
    b = 0.5 * (a + x / a);
    do
    {
        copie_a = a;
        b = 0.5 * (a + x / a);
        a = b;
        dif = copie_a - b;
    } while (abs(dif) >= epsilon);
    return b;
}
int main()
{
    float a, b, epsilon = 0.00001, x;
    float rezultat;
    cin >> x;
    rezultat = radacina_patrata(x);
    cout << rezultat;

    return 0;
}
