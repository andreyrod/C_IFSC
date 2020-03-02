#ifndef LISTAENCADEADA_H_INCLUDED
#define LISTAENCADEADA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "conio.h"

typedef struct temp {
    struct struct_pessoa dado;
    struct listaTemp *prox;
}listaTemp;

listaTemp *inicio=NULL;

void criaLista() {
    inicio = NULL;
}

int inserePessoaLista(struct struct_pessoa novaPessoa) {
    listaTemp *p;

    p = (listaTemp *) malloc(sizeof(listaTemp));

    if (p == NULL) {
        return 1;
    }

    p->dado = novaPessoa;
    p->prox = NULL;

    if (inicio == NULL) {
        inicio = p;
    } else {
        p->prox = inicio;
        inicio = p;
    }
    return 0;
}

void imprime() {
    listaTemp *ptr;
    if (inicio == NULL) {
        printf("--- fim da lista ---\n\n");
        return;
    }

    int controleCoordenada = 10;
    ptr = inicio;
    while (ptr !=NULL) {
        gotoxy(7, controleCoordenada);
        printf(" ID: %d", ptr->dado.identificador);
        gotoxy(20, controleCoordenada);
        printf(" Nome: %s", ptr->dado.nome);
        gotoxy(40, controleCoordenada);
        printf(" Sobrenome: %s", ptr->dado.sobrenome);
        gotoxy(70, controleCoordenada);
        printf(" Idade: %d", ptr->dado.idade);

        controleCoordenada++;
        ptr = ptr->prox;
    }
}

int getQuantidadeItensLista() {
    listaTemp *ptr;
    int quantidade = 0;

    ptr = inicio;
    while (ptr !=NULL) {
        quantidade++;
        ptr = ptr->prox;
    }

    return quantidade;
}

#endif // LISTAENCADEADA_H_INCLUDED
