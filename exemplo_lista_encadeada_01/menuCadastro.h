#ifndef MENUCADASTRO_H_INCLUDED
#define MENUCADASTRO_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>

#include"conio.h"

void montaLayoutFormCadastro() {
    criaTelaPreenchida(BLUE, 5, 6, 100, 2); //CABEÇALHO
    criaTelaPreenchida(CYAN, 5, 9, 100, 6); //CORPO

    textbackground(BLUE);
    gotoxy(7, 7);
    printf("CADASTRO DE NOVA PESSOA");

    textbackground(CYAN);textcolor(BLACK);
    gotoxy(7, 10);
    printf("NOME: ");
    scanf("%s", &pessoa.nome);
    fflush(stdin);

    textbackground(CYAN);textcolor(BLACK);
    gotoxy(7, 11);
    printf("SOBRENOME: ");
    scanf("%s", &pessoa.sobrenome);
    fflush(stdin);

    textbackground(CYAN);textcolor(BLACK);
    gotoxy(7, 12);
    printf("IDADE: ");
    gotoxy(16, 12);
    printf("ANOS");
    gotoxy(13, 12);
    scanf("%d", &pessoa.idade);
    fflush(stdin);
}

int iniciarCadastro() {
    system("cls");
    montaLayoutFormCadastro();
    if (pessoa.nome[0] == '\0' || pessoa.sobrenome[0] == '\0' || pessoa.idade == 0) {
        restauraPadraoPessoa();
        return 1;
    } else {
        restauraPadraoPessoa();
        return 0;
    }
}

#endif // MENUCADASTRO_H_INCLUDED
