#include <iostream>
#include <windows.h>
#include <conio.h>

/*
 * Numbers associated with keys
 * */
#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80
#define ESC 27

void gotoxy(int x, int y) {
    HANDLE hCon;
    COORD dwPos;

    dwPos.X = x;
    dwPos.Y = y;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon, dwPos);
}

void border() {
    // x-axis
    for (int i = 2; i < 78; ++i) {
        gotoxy(i, 3);
        printf("%c", 205);

        gotoxy(i, 23);
        printf("%c", 205);
    }

    // y-axis
    for (int i = 4; i < 23; ++i) {
        gotoxy(2, i);
        printf("%c", 186);

        gotoxy(77, i);
        printf("%c", 186);
    }

    // corners
    gotoxy(2, 3);
    printf("%c", 201);

    gotoxy(2, 23);
    printf("%c", 200);

    gotoxy(77, 3);
    printf("%c", 187);

    gotoxy(77, 23);
    printf("%c", 188);
}

int main() {
//    system("pause");
    border();
    return 0;
}
