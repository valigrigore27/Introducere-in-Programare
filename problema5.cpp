#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main()
{
    int i, j;
    double pi[21][21];
    pi[0][1] = 4.0;
    //se calculeaza sirul initial, pi de 01, 02, ... 0n
    for (i = 2; i <= 20; i++)
        pi[0][i] = pi[0][i - 1] - (pow((-1), i) * (4.0 / (2 * i - 1)));
    for (i = 1; i <= 10; i++)
        for (j = 1; j <= 20 - i; j++)
            pi[i][j] = 0.5 * (pi[i - 1][j] + pi[i - 1][j + 1]);

    cout << setprecision(10) << pi[10][10];

    return 0;
}
//Alta solutie :
//
//#include <iostream>
//#include <math.h>
//#include<iomanip>
//using namespace std;
//float pi(int n)
//{
//    int i;
//    float suma = 0;
//    for (i = 1;i <= n;i++)
//        suma = suma - (pow((-1), i)) * (4.0 / (2 * i - 1.0));
//    return suma;
//
//
//}
//int main()
//{
//    float n, rezultat;
//    cin >> n;
//    rezultat = pi(n);
//    cout << setprecision(10) << rezultat;
//
//
//    return 0;
//}