#include <iostream>
#include <string.h>
using namespace std;
void afisare_o_cifra(char n[], int numar_cifre)
{
    switch (n[numar_cifre - 1])
    {
    case '0':
        cout << "";
        break;
    case '1':
        cout << " unu";
        break;
    case '2':
        cout << " doi";
        break;
    case '3':
        cout << " trei";
        break;
    case '4':
        cout << " patru";
        break;
    case '5':
        cout << " cinci";
        break;
    case '6':
        cout << " sase";
        break;
    case '7':
        cout << " sapte";
        break;
    case '8':
        cout << " opt";
        break;
    case '9':
        cout << " noua";
        break;

    }


}
void afisare_doua_cifre(char n[], int numar_cifre)
{
    if (n[numar_cifre - 2] == '1')
    {
        switch (n[numar_cifre - 1])
        {
        case '0':
            cout << " zece";
            break;
        case '1':
            cout << " unsprezece";
            break;
        case '2':
            cout << " doisprezece";
            break;
        case '3':
            cout << " treisprezece";
            break;
        case '4':
            cout << " paisprezece";
            break;
        case '5':
            cout << " cincisprezece";
            break;
        case '6':
            cout << " saisprezece";
            break;
        case '7':
            cout << " saptesprezece";
            break;
        case '8':
            cout << " optsprezece";
            break;
        case '9':
            cout << " nouasprezece";
            break;

        }
    }
    else
    {
        switch (n[numar_cifre - 2])
        {
        case '0':
        {
            cout << "";
            afisare_o_cifra(n, numar_cifre);

        }
        break;

        case '2':
        {
            if (n[numar_cifre - 1] == '0')
                cout << " douazeci";
            else
                cout << " douazeci si";
            afisare_o_cifra(n, numar_cifre);
        }
        break;
        case '3':
        {
            if (n[numar_cifre - 1] == '0')
                cout << " treizeci";
            else
                cout << " treizeci si";
            afisare_o_cifra(n, numar_cifre);

        }
        break;
        case '4':
        {
            if (n[numar_cifre - 1] == '0')
                cout << " patruzeci";
            else
                cout << " patruzeci si";
            afisare_o_cifra(n, numar_cifre);

        }
        break;
        case '5':
        {
            if (n[numar_cifre - 1] == '0')
                cout << " cincizeci";
            else
                cout << " cincizeci si";
            afisare_o_cifra(n, numar_cifre);

        }
        break;
        case '6':
        {
            if (n[numar_cifre - 1] == '0')
                cout << " saizeci";
            else
                cout << " saizeci si";
            afisare_o_cifra(n, numar_cifre);

        }
        break;
        case '7':
        {
            if (n[numar_cifre - 1] == '0')
                cout << " saptezeci";
            else
                cout << " saptezeci si";
            afisare_o_cifra(n, numar_cifre);

        }
        break;
        case '8':
        {
            if (n[numar_cifre - 1] == '0')
                cout << " optzeci";
            else
                cout << " optzeci si";
            afisare_o_cifra(n, numar_cifre);

        }
        break;
        case '9':
        {
            if (n[numar_cifre - 1] == '0')
                cout << " nouazeci";
            else
                cout << " nouazeci si";
            afisare_o_cifra(n, numar_cifre);

        }
        break;

        }

    }

}
void afisare_trei_cifre(char n[], int numar_cifre)
{
    switch (n[numar_cifre - 3])
    {
    case '0':
    {
        cout << "";
        afisare_doua_cifre(n, numar_cifre);
    }
    break;
    case '1':
    {
        cout << " o suta";
        afisare_doua_cifre(n, numar_cifre);

    }
    break;
    case '2':
    {
        cout << " doua sute";
        afisare_doua_cifre(n, numar_cifre);

    }
    break;
    case '3':
    {
        cout << " trei sute";
        afisare_doua_cifre(n, numar_cifre);

    }
    break;
    case '4':
    {
        cout << " patru sute";
        afisare_doua_cifre(n, numar_cifre);

    }
    break;
    case '5':
    {
        cout << " cinci sute";
        afisare_doua_cifre(n, numar_cifre);

    }
    break;
    case '6':
    {
        cout << " sase sute";
        afisare_doua_cifre(n, numar_cifre);

    }
    break;
    case '7':
    {
        cout << " sapte sute";
        afisare_doua_cifre(n, numar_cifre);

    }
    break;
    case '8':
    {
        cout << " opt sute";
        afisare_doua_cifre(n, numar_cifre);

    }
    break;
    case '9':
    {
        cout << " noua sute";
        afisare_doua_cifre(n, numar_cifre);

    }
    break;

    }

}
void afisare_patru_cifre(char n[], int numar_cifre)
{
    switch (n[numar_cifre - 4])
    {
    case '0':
    {
        cout << "";
        afisare_trei_cifre(n, numar_cifre);
    }
    break;
    case '1':
    {
        cout << " o mie";
        afisare_trei_cifre(n, numar_cifre);

    }
    break;
    case '2':
    {
        cout << " doua mii";
        afisare_trei_cifre(n, numar_cifre);

    }
    break;
    case '3':
    {
        cout << " trei mii";
        afisare_trei_cifre(n, numar_cifre);

    }
    break;
    case '4':
    {
        cout << " patru mii";
        afisare_trei_cifre(n, numar_cifre);

    }
    break;
    case '5':
    {
        cout << " cinci mii";
        afisare_trei_cifre(n, numar_cifre);

    }
    break;
    case '6':
    {
        cout << " sase mii";
        afisare_trei_cifre(n, numar_cifre);


    }
    break;
    case '7':
    {
        cout << " sapte mii";
        afisare_trei_cifre(n, numar_cifre);

    }
    break;
    case '8':
    {
        cout << " opt mii";
        afisare_trei_cifre(n, numar_cifre);

    }
    break;
    case '9':
    {
        cout << " noua mii";
        afisare_trei_cifre(n, numar_cifre);

    }
    break;

    }

}
void afisare_cinci_cifre(char n[], int numar_cifre)
{
    char n1[3], n2[4];
    int i;
    if (n[numar_cifre - 5] == '1')
    {
        for (i = 0; i <= 1; i++)
            n1[i] = n[i];
        afisare_doua_cifre(n1, 2);
        cout << " mii";
        strcpy(n2, n + 2);
        afisare_trei_cifre(n2, 3);
    }
    else
    {
        for (i = 0; i <= 1; i++)
            n1[i] = n[i];
        afisare_doua_cifre(n1, 2);
        cout << " de mii";
        strcpy(n2, n + 2);
        afisare_trei_cifre(n2, 3);
    }

}

void afisare_sase_cifre(char n[], int numar_cifre)
{
    char n1[4], n2[4];
    int i;
    for (i = 0; i <= 2; i++)
        n1[i] = n[i];
    afisare_trei_cifre(n1, 3);
    if (n1[0] != '0')
        cout << " de mii";
    strcpy(n2, n + 3);
    afisare_trei_cifre(n2, 3);


}
void afisare_sapte_cifre(char n[], int numar_cifre)
{
    char n1[7];
    strcpy(n1, n + 1);
    switch (n[numar_cifre - 7])
    {
    case '1':
    {
        cout << "un milion";
        afisare_sase_cifre(n1, 6);
    }
    break;
    case '2':
    {
        cout << " doua milioane";
        afisare_sase_cifre(n1, 6);

    }
    break;
    case '3':
    {
        cout << " trei milioane";
        afisare_sase_cifre(n1, 6);
    }
    break;
    case '4':
    {
        cout << " patru milioane";
        afisare_sase_cifre(n1, 6);

    }
    break;
    case '5':
    {
        cout << " cinci milioane";
        afisare_sase_cifre(n1, 6);
    }
    break;
    case '6':
    {
        cout << " sase milioane";
        afisare_sase_cifre(n1, 6);

    }
    break;
    case '7':
    {
        cout << " sapte milioane";
        afisare_sase_cifre(n1, 6);
    }
    break;
    case '8':
    {
        cout << " opt milioane";
        afisare_sase_cifre(n1, 6);

    }
    break;
    case '9':
    {
        cout << " noua milioane";
        afisare_sase_cifre(n1, 6);

    }
    break;

    }

}
void afisare_opt_cifre(char n[], int numar_cifre)
{
    int i;
    char n1[4], n2[7];
    for (i = 0; i <= 2; i++)
        n1[i] = n[i];
    afisare_trei_cifre(n1, 3);
    cout << " de milioane";
    strcpy(n2, n + 2);
    afisare_sase_cifre(n2, 6);

}

void afisare_noua_cifre(char n[], int numar_cifre)
{
    int i;
    char n1[4], n2[4];
    strncpy(n1, n, 3);
    afisare_trei_cifre(n1, 3);
    cout << " de milioane";
    strcpy(n2, n + 3);
    afisare_sase_cifre(n2, 6);

}


int main()
{
    int numar_cifre, i;
    char n[10];
    cout << "Introduceti numarul de cifre al numarului analizat: ";
    cin >> numar_cifre;
    cout << "Introduceti numarul analizat: ";
    for (i = 0; i < numar_cifre; i++)
        cin >> n[i];

    if (n[0] == '0' && numar_cifre == 1)
        cout << "zero";
    switch (numar_cifre)
    {
    case 1:
        afisare_o_cifra(n, numar_cifre);
        break;
    case 2:
        afisare_doua_cifre(n, numar_cifre);
        break;
    case 3:
        afisare_trei_cifre(n, numar_cifre);
        break;
    case 4:
        afisare_patru_cifre(n, numar_cifre);
        break;
    case 5:
        afisare_cinci_cifre(n, numar_cifre);
        break;
    case 6:
        afisare_sase_cifre(n, numar_cifre);
        break;
    case 7:
        afisare_sapte_cifre(n, numar_cifre);
        break;
    case 8:
        afisare_opt_cifre(n, numar_cifre);
        break;
    case 9:
        afisare_noua_cifre(n, numar_cifre);
        break;
    }

    return 0;
}
