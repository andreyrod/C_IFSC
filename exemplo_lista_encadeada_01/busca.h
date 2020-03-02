#ifndef BUSCA_H_INCLUDED
#define BUSCA_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include"conio.h"
#include"notification.h"

void buscaGeral() {
    system("cls");
    apresentaObservacao("SITUACAO: OK");
    criaTelaPreenchida(BLUE, 5, 6, 100, 2); //CABEÇALHO
    criaTelaPreenchida(CYAN, 5, 9, 100, getQuantidadeItensLista() + 1); //CORPO

    textbackground(BLUE);textcolor(WHITE);
    gotoxy(7, 7);
    printf("RESULTADO DA BUSCA");

    textbackground(CYAN);textcolor(BLACK);
    imprime();

    getch();
}

#endif // BUSCA_H_INCLUDED
