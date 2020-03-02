#include <stdio.h>
#define QTD 5

int produtos[QTD];
int opcao;

void inicializaVetor() {
    for(int i = 0; i < QTD; i++) {
        produtos[i] = -1;
    }
}

void cadastrar() {
    // verifica posicao livre para cadastro
    for(int i = 0; i < QTD; i++) {
        if(produtos[i] == -1) {
            printf("Digite o codigo para cadastro: ");
            scanf("%d", &produtos[i]);
            return;
        }
    }
    printf("Nao ha espaço disponivel para o cadastro.\n");
}

void listar() {
    char encontrou = 0;
    printf("Produtos cadastrados\n");
    for(int i = 0; i < QTD; i++) {
        if(produtos[i] != -1) {
            printf("Codigo: %d\n", produtos[i]);
            encontrou = 1;
        }
    }
    if(encontrou == 0) {
        printf("Não foram encontrados produtos.\n");
    }
}


int main()
{
    inicializaVetor();

    while(1) {
        printf("Cadastro de produtos\n");
        printf("1 - Cadastrar\n");
        printf("2 - Listar\n");
        printf("3 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                cadastrar();
                break;
            case 2:
                listar();
                break;
            case 3:
                printf("Fim.\n");
                return 0;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }

}
