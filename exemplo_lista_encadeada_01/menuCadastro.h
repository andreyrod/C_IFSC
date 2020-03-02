#ifndef MENUCADASTRO_H_INCLUDED
#define MENUCADASTRO_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>

#include"conio.h"

#include"notification.h"

void montaLayoutFormCadastro() {
    apresentaObservacao("SITUACAO: OK");
    criaTelaPreenchida(BLUE, 5, 6, 100, 2); //CABEÇALHO
    criaTelaPreenchida(CYAN, 5, 9, 100, 6); //CORPO

    textbackground(BLUE);textcolor(WHITE);
    gotoxy(7, 7);
    printf("CADASTRO DE NOVA PESSOA");

    textbackground(CYAN);textcolor(BLACK);
    gotoxy(7, 10);
    printf("PRIMEIRO NOME: ");
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

    pessoa.identificador = ++identificadorAtual;
    printf("%d", identificadorAtual);
}

int iniciarCadastro() {
    system("cls");
    montaLayoutFormCadastro();
    return adicionaPessoaLista();
}

#endif // MENUCADASTRO_H_INCLUDED
