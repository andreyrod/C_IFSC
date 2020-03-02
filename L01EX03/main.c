#include <stdio.h>
#include <string.h>

#define QTD 5

int placas[QTD];

void inicializaVetor() {
    for(int i = 0; i < QTD; i++) {
        placas[i] = -1;
    }
}

void cadastrar() {
    for(int i = 0; i < QTD; i++) {
        if(placas[i] == -1) {
            printf("Digite a placa: ");
            scanf("%d", &placas[i]);
            printf("Cadastro realizado com sucesso.\n");
            return;
        }
    }
    printf("Espaco nao disponivel para cadastro.\n");
}

void listar() {
    char encontrou = 0;
    printf("Placas cadastradas\n");
    for(int i = 0; i < QTD; i++) {
        if(placas[i] != -1) {
            printf("Placa: %d\n", placas[i]);
            encontrou = 1;
        }
    }
    if(encontrou == 0) {
       printf("Nao ha placas cadastradas.\n");
    }
}


void excluir() {
    int placa;
    printf("Digite a placa para exclusao: ");
    scanf("%d", &placa);
    for(int i = 0; i < QTD; i++) {
        if(placas[i] == placa) {
            placas[i] = -1;
            printf("Placa excluida com sucesso.\n");
            return;
        }
    }
    printf("Nao foi possivel encontrar a placa: %d.\n", placa);
}

int main()
{
    int opcao;
    inicializaVetor();
    while(1) {
        printf("------------------\n");
        printf("Cadastro de placas\n");
        printf("------------------\n");
        printf("1 - Cadastrar\n");
        printf("2 - Listar\n");
        printf("3 - Excluir\n");
        printf("0 - Sair\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                cadastrar();
                break;
            case 2:
                listar();
                break;
            case 3:
                excluir();
                break;
            case 0:
                printf("Fim.\n");
                return 0;
            default:
                printf("Opcao invalida!");
                break;
        }
    }
}
