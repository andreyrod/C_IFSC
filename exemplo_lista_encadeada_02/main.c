#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conio.h"

//VARIAVEIS GLOBAIS
struct sPerson {
    int id;
    char name[30];
    char surname[30];
    int age;
}person;

//LISTA ENCADEADA E CONTROLES
typedef struct sLinkedList {
    struct sPerson personInfo;
    struct linkedList *proxPersonInfo;
}linkedList;

linkedList* newItemLinkedList() {
    return (linkedList*) malloc(sizeof(linkedList));
}

linkedList* initLinkedList() {
    struct linkedList *firstItemLinkedList = NULL;
    return firstItemLinkedList;
}

linkedList* insertPersonIntoLinkedList(linkedList* firstItemLinkedList, struct sPerson newPerson) {
    linkedList *newItem = newItemLinkedList();
    newItem->personInfo = newPerson;

    if(firstItemLinkedList == NULL) {
        newItem->proxPersonInfo == NULL;
        firstItemLinkedList = newItem;
    } else {
        newItem->proxPersonInfo = firstItemLinkedList;
        firstItemLinkedList = newItem;
    }
    return firstItemLinkedList;
}

void printInfoLinkedList(linkedList* firstItemLinkedList) {
    linkedList* control = firstItemLinkedList;

    while(control != NULL) {
        printf("ID: %d \n", control->personInfo.id);
        control = control->proxPersonInfo;
    }
}

linkedList* deleteItemFromLinkedList(linkedList* firstItemLinkedList, int idItem) {
    linkedList* control = firstItemLinkedList;
    linkedList* deleted;

    if (control == NULL) {
        return control;
    }

    if (control->personInfo.id == idItem) {
        deleted = control;
        control = control->proxPersonInfo;
        free(deleted);
        return control;
    }

    while(control != NULL) {
        deleted = control->proxPersonInfo;
        if(deleted->personInfo.id == idItem) {
            control->proxPersonInfo = deleted->proxPersonInfo;
            printf("Registro excluido: %d \n", deleted->personInfo.id);
            free(deleted);
            return firstItemLinkedList;
        }
        control = control->proxPersonInfo;
    }
    return control;
}

//TESTES
linkedList* initialRegister(int quantidadeInicial, linkedList* firstItemLinkedList) {
    for (int x = 0; x <= quantidadeInicial; x++) {
        person.id = x;
        strcpy(person.name, "nomeTeste");
        strcpy(person.surname, "SobrenomeTeste");
        person.age = x;

        firstItemLinkedList = insertPersonIntoLinkedList(firstItemLinkedList, person);
        printf("Inserido: %d \n", firstItemLinkedList->personInfo.id);
    }
    return firstItemLinkedList;
}

//TELAS
void mainMenu() {
    int control = 1;
    while(control = 1) {
        control = 1;

        system("cls");
        printf("MENU PRINCIPAL \n");
        printf("1 - CADASTRO \n");
        printf("2 - ATUALIZACAO \n");
        printf("3 - BUSCA \n");
        printf("4 - EXCLUSAO \n");
        printf("0 - SAIR \n");

        scanf("%d", &control);
        fflush(stdin);
        switch(control) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 0:
            break;
        default:
            break;
        }
    }
}

void registerMenu() {
}

//INICIO
int main() {
    struct linkedList* firstItemLinkedList = initLinkedList();
    firstItemLinkedList = initialRegister(10, firstItemLinkedList);

    printf(" \n\n");
    firstItemLinkedList = deleteItemFromLinkedList(firstItemLinkedList, 3);
    firstItemLinkedList = deleteItemFromLinkedList(firstItemLinkedList, 9);
    printf(" \n\n");

    printInfoLinkedList(firstItemLinkedList);
    return 0;
}
