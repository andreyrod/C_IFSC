#ifndef NOTIFICATION_H_INCLUDED
#define NOTIFICATION_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>

#include"conio.h"

void apresentaErro(char erro[100]) {
    limpaStatus();
    criaTelaPreenchida(LIGHTRED, 5, 1, 100, 3);

    textbackground(LIGHTRED);textcolor(BLACK);
    gotoxy(7, 2);
    printf("ERRO: %s", erro);
}

void apresentarSucesso(char sucesso[100]) {
    limpaStatus();
    criaTelaPreenchida(GREEN, 5, 1, 100, 3);

    textbackground(GREEN);textcolor(BLACK);
    gotoxy(7, 2);
    printf("SUCESSO: %s", sucesso);
}

void apresentaObservacao(char observacao[100]) {
    limpaStatus();
    criaTelaPreenchida(LIGHTGRAY, 5, 1, 100, 3);

    textbackground(LIGHTGRAY);textcolor(BLACK);
    gotoxy(7, 2);
    printf("OBSERVACAO: %s", observacao);
}

#endif // NOTIFICATION_H_INCLUDED
