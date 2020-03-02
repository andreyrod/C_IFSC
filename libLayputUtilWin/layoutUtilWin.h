#ifndef LAYOUTUTILWIN_H
#define LAYOUTUTILWIN_H
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"

void createUnfilledWindow(int color, int initialX, int initialY, int sizeX, int sizeY) {
    textcolor(color);textbackground(color);
    int controlX;

    gotoxy(initialX, initialY);
    for(controlX = 0; controlX < sizeX; controlX++) {
        printf("X");
    }

    for(controlX = 0; controlX <= sizeY; controlX++) {
        gotoxy(initialX, initialY + controlX);
        printf(" ");
        gotoxy(initialX + sizeX, initialY + controlX);
        printf(" ");
    }


    gotoxy(initialX, initialY + sizeY);
    for(controlX = 0; controlX < sizeX; controlX++) {
        printf("X");
    }
}

void createFillWindow(int color, int initialX, int initialY, int sizeX, int sizeY) {
    textcolor(color);textbackground(color);
    int controlX, controlY;

    for(controlY = 0; controlY < sizeX; controlY++) {
        gotoxy(initialX, initialY + controlY);
        for(controlX = 0; controlX < sizeY; controlX++) {
            printf(" ");
        }
    }
}

#endif
