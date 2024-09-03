#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
double factorial(double x)
{
    if (x == 0 || x == 1)
        return 1;
    else
        return x * factorial(x - 1);

}
double e_la_x(double x)
{
    double putere = 1, indice_exponent = 1, a = 1, b, copie_a, factor;
    double epsilon = 0.00001;
    do
    {
        copie_a = a;
        putere = putere * x;
        factor = factorial(indice_exponent);
        b = a + putere / factor;
        a = b;
        indice_exponent++;
    } while (abs(copie_a - b) >= epsilon);

    return b;

}
double cosinus(double x)
{
    double putere = 1, a = 1, b, copie_a, factor, semn = 1;
    int indice_exponent = 0;
    double epsilon = 0.00001;
    do
    {
        putere = putere * x;
        indice_exponent++;
        if (indice_exponent % 2 == 0)
        {
            copie_a = a;
            semn = -semn;
            factor = factorial(indice_exponent);
            b = a + semn * putere / factor;
            a = b;

        }

    } while (abs(copie_a - b) >= epsilon);
    return b;

}
double sinus(double x)
{
    double putere = 1, a = 0, b, copie_a, factor, semn = -1;
    int indice_exponent = 0;
    double epsilon = 0.00001;
    do
    {
        putere = putere * x;
        indice_exponent++;
        if (indice_exponent % 2 == 1)
        {
            copie_a = a;
            semn = -semn;
            factor = factorial(indice_exponent);
            b = a + semn * putere / factor;
            a = b;

        }

    } while (abs(copie_a - b) >= epsilon);
    return b;
}
int main()
{
    double n, rezultat_putere_e, rezultat_cosinus, rezultat_sinus;
    cin >> n;
    rezultat_putere_e = e_la_x(n);
    rezultat_cosinus = cosinus(n);
    rezultat_sinus = sinus(n);
    cout << "e la puterea " << n << " este aproximativ " << setprecision(10) << rezultat_putere_e << endl;
    cout << "cosinus de " << n << " este aproximativ " << setprecision(10) << rezultat_cosinus << endl;
    cout << "sinus de " << n << " este aproximativ " << setprecision(10) << rezultat_sinus << endl;

    return 0;
}
