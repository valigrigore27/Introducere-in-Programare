#include <iostream>
#include <cmath>
#include <graphics.h>
#include <winbgim.h>
#include <string>
#include <sstream>
using namespace std;
struct nod
{
    int info;
    struct nod st;
    struct noddr;
};

void arbori(int xradacina, int yradacina, int raza)
{
    char s[30];
    nod* arbore = new nod;
    cin >> arbore->info;
    if (arbore->info > -1)
        itoa(arbore->info, s, 10);
    else strcpy(s, "NULL");
    circle(xradacina, yradacina, raza);

    if (strcmp(s, "NULL"))
    {
        line(xradacina, yradacina + raza / 2, xradacina - 100, yradacina + 100);
        line(xradacina, yradacina + raza / 2, xradacina + 100, yradacina + 100);
    }

    outtextxy(xradacina, yradacina, s);
    if (strcmp(s, "NULL"))
    {
        arbori(xradacina - 100, yradacina + 100, raza);
        arbori(xradacina + 100, yradacina + 100, raza);
    }
}
int main()
{
    initwindow(1500, 1500);
    arbori(750, 100, 25);
    getch();
    closegraph();
    return 0;
}