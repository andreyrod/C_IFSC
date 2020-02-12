#ifndef TELA_H_INCLUDED
#define TELA_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>

#include"conio.h"

void criaTelaSomenteBordas(int cor, int xInicial, int yInicial, int quantidadeX, int quantidadeY) {
    textbackground(cor);
    int i;

    gotoxy(xInicial, yInicial);
    for(i = 0; i <= quantidadeX; ++i)
        printf(" ");

    gotoxy(xInicial, (yInicial + quantidadeY));
    for(i = 0; i <= quantidadeX; ++i)
        printf(" ");

    for(i = 0; i < quantidadeY; ++i) {
        gotoxy(xInicial, (yInicial + i));
        printf(" ");
        gotoxy((xInicial + quantidadeX), (yInicial + i));
        printf(" ");
    }

    i = 0;
    textbackground(BLACK);
}

void criaTelaPreenchida(int cor, int xInicial, int yInicial, int quantidadeX, int quantidadeY) {
    textbackground(cor);
    int x, y;

    for(y = 0; y <= quantidadeY; ++y) {
        gotoxy(xInicial, (yInicial + y));
        for(x = 0; x <= quantidadeX; ++x) {
            printf(" ");
        }
    }

    x = 0;
    y = 0;
    textbackground(BLACK);
}


#endif // TELA_H_INCLUDED
