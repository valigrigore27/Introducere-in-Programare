#include <graphics.h>
#include <winbgim.h>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

#ifndef FUNCTIONS_H
#define FUNCTIONS_H


#define WIDTH_TABLE 400
#define HEIGHT_TABLE 400
#define ROWS 9
#define COLONS 9
#define EMPTY 0
#define TAKEN 9
#define MAX 20
#define FUNDAL BLUE

int i, j, bubbleCount;
int square;
int culo = 0;
bool gata;
int cursorX, cursorY;
int randomNumbers[17];
int countN = 0;
int top = 100;
int Left = 100;
int GM, x, y;
int GD = DETECT;
int nrBuline = 0;
int table[MAX][MAX];
POINT cursorPosition;
int color[8] = { BLUE, RED, BLACK,GREEN, YELLOW, LIGHTCYAN, LIGHTBLUE, MAGENTA };
int x1, y1, x2, y2, xmiddle, ymiddle, row, colon;
int row1 = 0, colon1 = 0, culo1 = 0;

#endif
ofstream out("out.txt");

void resetStyle(int textcolor)
{
    setcolor(textcolor);
    setlinestyle(SOLID_LINE, 0x3333, NORM_WIDTH);
}

void startButton(int textColor)
{
    setcolor(textColor);
    settextstyle(0, 0, 3);
    outtextxy(260, 200, "START");
}

void instructionsButton(int textColor)
{
    setcolor(textColor);
    settextstyle(0, 0, 3);
    outtextxy(176, 250, "INSTRUCTIUNI");
}

void exitButton(int textColor)
{
    setcolor(textColor);
    settextstyle(0, 0, 3);
    outtextxy(250, 300, "IESIRE");
}

void goBackButton(int textColor)
{
    setcolor(textColor);
    settextstyle(0, 0, 3);
    outtextxy(80, 400, "INAPOI");
}

void titleInstructions()
{
    setcolor(WHITE);
    settextstyle(1, 0, 3);
    outtextxy(230, 40, "Instructiuni");
}

void instructions()
{
    setcolor(WHITE);
    settextstyle(0, 0, 2);
    outtextxy(20, 100, "* Impartiti careul dat in 8 parti continue");
    outtextxy(47, 120, "si egale ca arie, care sa aiba cate");
    outtextxy(47, 140, "o bulina in componenta lor;");
    outtextxy(20, 180, "* Separarea in segmente nu se poate");
    outtextxy(47, 200, "face in diagonala;");
    outtextxy(20, 240, "* Odata plasate, bilele nu mai pot fi sterse;");
    outtextxy(20, 280, "* Pentru a plasa bilele faceti click");
    outtextxy(47, 300, "stanga pe un careu;");

}

void mainTitle()
{
    setcolor(WHITE);
    settextstyle(1, 0, 5);
    outtextxy(55, 40, "Impartirea careului");
}

void gameGoBackButton(int textColor)
{
    outtextxy(18, 20, "INAPOI");
    setcolor(textColor);
    rectangle(10, 10, 170, 50);
}

void newGame(int textColor)
{
    outtextxy(456, 20, "JOC NOU");
    setcolor(textColor);
    rectangle(448, 10, 630, 50);
}

void winState()
{
    setcolor(GREEN);
    settextstyle(0, 0, 3);
    outtextxy(500, 90, "AI");
    outtextxy(440, 120, "CASTIGAT!");
    resetStyle(LIGHTGRAY);
}

void desenarePiesa(int linia, int coloana, int v)
{
    if (v < 0) v = -v;
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    x1 = Left + square * (coloana - 1);
    y1 = top + square * (linia - 1);
    x2 = x1 + square;
    y2 = y1 + square;
    xmiddle = (x1 + x2) / 2;
    ymiddle = (y1 + y2) / 2;
    bar(xmiddle - 20, ymiddle - 20, xmiddle + 20, ymiddle + 20);
    // afisez cerc de culoarea culoare[culo]
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, color[v]);
    if (v < 0) setcolor(WHITE);
    fillellipse(xmiddle, ymiddle, 18, 18);
}
int depasire(int culo)
{
    int i, j, dep = 1;
    for (i = 1; i <= 8; i++)
        for (j = 1; j <= 8; j++)
            if (table[i][j] == culo)dep++;
    return dep;
}
void punerePiesa()
{
    if (ismouseclick(WM_LBUTTONDOWN))
    {
        clearmouseclick(WM_LBUTTONDOWN);
        x = mousex();
        y = mousey();
        if (x >= Left && x <= Left + WIDTH_TABLE && y >= top && y <= top + HEIGHT_TABLE)
        {
            row = (y - top) / square + 1;
            colon = (x - Left) / square + 1;


            if (table[row][colon] == 0)
            {
                if (depasire(culo) <= 7)
                {
                    //            cout<<row1<<' '<<colon1<<' '<<culo1<<endl;
                    //            cout<<row<<' '<<colon<<' '<<culo<<endl<<endl;
                    if ((row == row1 && colon == colon1 + 1) || (row == row1 && colon == colon1 - 1) || (row == row1 - 1 && colon == colon1) || (row == row1 + 1 && colon == colon1))
                    {
                        table[row][colon] = culo;
                        desenarePiesa(row, colon, culo);
                        bubbleCount++;
                    }
                    else cout << "NU AI VOIE SA AMPLASEZI PIESA ACOLO" << endl;
                }
                else cout << "limita piesa" << endl;

                //                out<<"R: "<<row<<" C: "<<colon<<" Color: "<<culo<<endl;

            }
            else
            {
                if (table[row][colon] < 0)   // preiau culoarea de la o piesa amplasata initial
                {
                    culo = -table[row][colon];

                }
            }

            row1 = row;
            colon1 = colon;
            culo1 = culo;
        }

    }

}

void initializareTabla()
{
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; ++j)
        {
            table[i][j] = 0;
        }
    }

    for (int i = 0; i <= 7; ++i)
    {
        row = rand() % 8 + 1;
        colon = rand() % 8 + 1;

        while (table[row][colon] != 0)
        {
            row = rand() % 8 + 1;
            colon = rand() % 8 + 1;
        }

        table[row][colon] = -(i + 1);
    }
}



void createTable()
{
    square = WIDTH_TABLE / 8;
    top = (getmaxy() - WIDTH_TABLE) / 2 + 20;
    Left = (getmaxx() - HEIGHT_TABLE) / 2 - 90;

    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            setcolor(WHITE);
            rectangle(Left + square * (i - 1), top + square * (j - 1), Left + square * i, top + square * j);
            desenarePiesa(i, j, table[i][j]);
        }
    }
}


int main()
{
    // ---INIT FUNCTIONS---
    srand(time(NULL));
    initgraph(&GD, &GM, NULL);
    setbkcolor(BLACK);
    cleardevice();
    mainTitle();
    startButton(LIGHTGRAY);
    instructionsButton(LIGHTGRAY);
    exitButton(LIGHTGRAY);

main:
    mainTitle();
    while (true)
    {
        GetCursorPos(&cursorPosition);
        ScreenToClient(GetForegroundWindow(), &cursorPosition);
        cursorX = cursorPosition.x;
        cursorY = cursorPosition.y;

        //            if(GetAsyncKeyState(VK_LBUTTON)) {
        //                cout<<cursorX<<" "<<cursorY<<endl;
        //            }
                // --- start button ---
        if ((cursorX >= 263 && cursorY >= 204) && (cursorX <= 377 && cursorY <= 214))
        {
            delay(10);
            startButton(WHITE);
            if (GetAsyncKeyState(VK_LBUTTON))
            {
                goto start;
            }
        }
        else
        {
            delay(10);
            startButton(LIGHTGRAY);
        }
        // --- instructions button ---
        if ((cursorX >= 180 && cursorY >= 254) && (cursorX <= 460 && cursorY <= 266))
        {
            delay(10);
            instructionsButton(WHITE);
            if (GetAsyncKeyState(VK_LBUTTON))
            {
                goto instructions;
            }

        }
        else
        {
            delay(10);
            instructionsButton(LIGHTGRAY);
        }
        // --- exit button
        if ((cursorX >= 249 && cursorY >= 303) && (cursorX <= 386 && cursorY <= 316))
        {
            delay(10);
            exitButton(WHITE);
            if (GetAsyncKeyState(VK_LBUTTON))
            {
                return 0;
            }
        }
        else
        {
            delay(10);
            exitButton(LIGHTGRAY);
        }

    }

    //---Instructions scope
instructions:
    cleardevice();
    titleInstructions();
    instructions();
    goBackButton(LIGHTGRAY);
    while (true)
    {
        GetCursorPos(&cursorPosition);
        ScreenToClient(GetForegroundWindow(), &cursorPosition);
        cursorX = cursorPosition.x;
        cursorY = cursorPosition.y;

        //        if(GetAsyncKeyState(VK_LBUTTON)) {
        //            cout<<cursorX<<" "<<cursorY<<endl;
        //        }

        if ((cursorX >= 82 && cursorY >= 404) && (cursorX <= 219 && cursorY <= 414))
        {
            delay(10);
            goBackButton(WHITE);
            if (GetAsyncKeyState(VK_LBUTTON))
            {
                cleardevice();
                goto main;
            }
        }
        else
        {
            delay(10);
            goBackButton(LIGHTGRAY);
        }
    }

    // --- start scope
start:
    bubbleCount = 8;
    cleardevice();
    initializareTabla();
    createTable();
    newGame(LIGHTGRAY);
    gameGoBackButton(LIGHTGRAY);

    while (true)
    {
        GetCursorPos(&cursorPosition);
        ScreenToClient(GetForegroundWindow(), &cursorPosition);
        cursorX = cursorPosition.x;
        cursorY = cursorPosition.y;
        getmouseclick(WM_LBUTTONDOWN, x, y);

        //        if(GetAsyncKeyState(VK_LBUTTON)) {
        //            cout<<cursorX<<" "<<cursorY<<endl;
        //        }
                // ---new game
        if ((cursorX >= 450 && cursorY >= 10) && (cursorX <= 635 && cursorY <= 50))
        {
            delay(10);
            resetStyle(WHITE);
            newGame(WHITE);
            if (GetAsyncKeyState(VK_LBUTTON))
            {
                goto start;
            }
        }
        else
        {
            delay(10);
            resetStyle(LIGHTGRAY);
            newGame(LIGHTGRAY);
        }
        // --- go back
        if ((cursorX >= 10 && cursorY >= 10) && (cursorX <= 170 && cursorY <= 51))
        {
            resetStyle(WHITE);
            gameGoBackButton(WHITE);
            if (GetAsyncKeyState(VK_LBUTTON))
            {
                cleardevice();
                goto main;
            }
        }
        else
        {
            resetStyle(LIGHTGRAY);
            gameGoBackButton(LIGHTGRAY);
        }

        punerePiesa();
        if (bubbleCount == 64)
        {
            winState();
        }
    }

    getch();
    closegraph();
    return 0;
}


