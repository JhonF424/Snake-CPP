#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
/*
 * Numbers associated with arrow keys
 * */
#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80
#define ESC 27

int body[200][2];
int n = 1;
int size = 3;
char key;
int x = 10;
int y = 12;

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

void saveNewPosition(){
//    This is the snake head
    body[n][0] = x;
    body[n][1] = y;
    n++;
    if (n == size){
        n = 1;
    }
}

int main() {
//    system("pause");
    while (key != ESC){
        //deleteBody();
        saveNewPosition();
        //paintBody();
    }
    border();
    return 0;
}
