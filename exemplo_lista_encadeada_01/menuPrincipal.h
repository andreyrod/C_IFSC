#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H

#include<stdio.h>
#include<stdlib.h>

#include"conio.h"

int opcaoSelecionada = 0;
int controle = 0;

void montaLayoutOpcoes() {
    criaTelaPreenchida(BLUE, 5, 6, 100, 2); //CABEÇALHO
    criaTelaPreenchida(CYAN, 5, 9, 100, 6); //CORPO


    textbackground(BLUE);
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

void controleOpcaoSelecionada() {
    switch(opcaoSelecionada) {
        case 1:
            if (iniciarCadastro() == 1) {
                apresentaErro("Cadastrar uma nova pessoa, tente novamente posteriormente.");
            } else {
                apresentarSucesso("Cadastro de nova pessoa.");
            }
        break;
        case 2:
            printf("Teste 3");
        break;
        case 3:
            printf("Teste 3");
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

