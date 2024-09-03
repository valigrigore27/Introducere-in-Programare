#include <iostream>
#include <string.h>
using namespace std;

void rezolvare(char text[1000])
{
    int i = 0;
    char* p, copie_text[1000];
    strcpy(copie_text, text);

    struct
    {
        char cuvant[100];
        int nrAparitii;
    } v[100];

    p = strtok(text, " ");
    while (p != NULL)
    {

        strcpy(v[i].cuvant, p);
        p = strtok(NULL, " ");
        i++;
    }
    i--;
    for (int j = 0; j < i; j++)
        v[j].nrAparitii = 0;
    p = strtok(copie_text, " ");
    while (p != NULL)
    {
        for (int j = 0; j < i; j++)
        {
            if (strcmp(v[j].cuvant, p) == 0)
                v[j].nrAparitii++;
        }
        p = strtok(NULL, " ");

    }
    for (int j = 0; j < i; j++)
        if (v[j].nrAparitii != -1)
        {
            cout << "cuvant:" << v[j].cuvant << ", " << "aparitii:" << v[j].nrAparitii << endl;
            v[j].nrAparitii = -1;
        }
}

int main()
{
    char text[1000];
    cin.getline(text, 1000);
    rezolvare(text);
    return 0;
}