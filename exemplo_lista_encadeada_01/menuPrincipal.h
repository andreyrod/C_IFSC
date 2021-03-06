#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H

#include<stdio.h>
#include<stdlib.h>

#include"conio.h"

#include"notification.h"

int opcaoSelecionada = 0;
int controle = 0;

void montaLayoutOpcoes() {
    criaTelaPreenchida(BLUE, 5, 6, 100, 2); //CABE�ALHO
    criaTelaPreenchida(CYAN, 5, 9, 100, 6); //CORPO


    textbackground(BLUE);textcolor(WHITE);
    gotoxy(7, 7);
    printf("MENU PRINCIPAL: GESTAO DE PESSOAS");

    textbackground(CYAN);textcolor(BLACK);
    gotoxy(7, 10);
    printf("1 - CADASTRO");
    gotoxy(7, 11);
    printf("2 - ATUALIZACAO DADOS");
    gotoxy(7, 12);
    printf("3 - BUSCA");
    gotoxy(7, 13);
    printf("4 - EXCLUSAO");
    gotoxy(7, 14);
    printf("5 - SAIR");
}

void getOpcaoMenu() {
    criaTelaPreenchida(BLACK, 5, 17, 22, 2);//LIMPEZA CASO TENHA DIGITADO ALGO ANTERIORMENTE

    criaTelaSomenteBordas(CYAN, 5, 17, 22, 2);
    textbackground(CYAN);textcolor(BLACK);

    gotoxy(6, 18);
    printf("OPCAO SELECIONADA  ");
    textbackground(BLACK);textcolor(WHITE);
    scanf("%d", &opcaoSelecionada);
    fflush(stdin);
}

void limpaStatus() {
    criaTelaPreenchida(BLACK, 5, 1, 100, 2);
}

void controleOpcaoSelecionada() {
    switch(opcaoSelecionada) {
        case 1:
            if (iniciarCadastro() == 1) {
                apresentaErro("Cadastrar uma nova pessoa, tente novamente.");
            } else {
                apresentarSucesso("Cadastro de nova pessoa.");
            }
        break;
        case 2:
            printf("Teste 2");
        break;
        case 3:
            buscaGeral();
        break;
        case 4:
            printf("Teste 4");
        break;
        case 5:
            printf("SAIDA");
            controle = 1;
        break;
        default:
            printf("Default");
        break;
    }
}

void iniciarMenuPrincipal() {
    apresentaObservacao("SITUACAO OK");
    while (controle == 0) {
        montaLayoutOpcoes();
        getOpcaoMenu();
        controleOpcaoSelecionada();
    }
    system("cls");
}

#endif // MENUPRINCIPAL_H

