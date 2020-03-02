#include <stdio.h>
#define QTD 5

struct pessoa {
    int codigo;
    char nome[51];
    int idade;
    float altura;
    float peso;
};

typedef struct pessoa Pessoa;

Pessoa p[QTD];
int opcao;

void alterar() {
    char alterou = 0;
    int codigo;
    printf("Digite o codigo para alteracao: ");
    scanf("%d", &codigo);
    if(codigo == -1) {
        printf("Codigo invalido.\n");
        return;
    }
    for(int i=0; i<QTD; i++) {
        if(p[i].codigo == codigo) {
            printf("Nome: ");
            fflush(stdin);
            gets(p[i].nome);
            printf("Idade: ");
            scanf("%d", &p[i].idade);
            printf("Altura: ");
            scanf("%f", &p[i].altura);
            printf("Peso: ");
            scanf("%f", &p[i].peso);
            alterou = 1;
        }
    }
    if(alterou == 0) {
        printf("Nao foi possivel encontrar o codigo solicitado.\n");
    }
}


void cadastrar() {
    for(int i=0; i<QTD; i++) {
        if(p[i].codigo == -1) {
            printf("Digite os dados abaixo para o cadastro:\n");
            printf("Codigo: ");
            scanf("%d", &p[i].codigo);
            printf("Nome: ");
            fflush(stdin);
            gets(p[i].nome);
            printf("Idade: ");
            scanf("%d", &p[i].idade);
            printf("Altura: ");
            scanf("%f", &p[i].altura);
            printf("Peso: ");
            scanf("%f", &p[i].peso);
            return;
        }
    }
    printf("Nao ha espaco disponivel para novos cadastros.\n");
}


void listar() {
    char listou = 0;
    printf("Pessoas cadastradas\n");
    printf("-------------------\n");
    for(int i=0; i<QTD; i++) {
        if(p[i].codigo != -1) {
            printf("Cadastro\n");
            printf("Codigo: %d\n", p[i].codigo);
            printf("Nome: %s\n", p[i].nome);
            printf("Idade: %d\n", p[i].idade);
            printf("Altura: %f m\n", p[i].altura);
            printf("Peso: %f kg\n", p[i].peso);
            printf("----------------\n");
            listou=1;
        }
    }
    if(listou == 0) {
        printf("Nao ha pessoas cadastradas.\n");
    }
}

void inicializaCadastro() {
    for(int i=0; i<QTD; i++) {
        p[i].codigo = -1;
    }
}

int main()
{
    inicializaCadastro();
    while(1) {
        printf("-----------------------------\n");
        printf("Cadastro de medidas corporeas\n");
        printf("-----------------------------\n");
        printf("Menu\n");
        printf("1 - Cadastrar\n");
        printf("2 - Alterar\n");
        printf("3 - Listar\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                cadastrar();
                break;
            case 2:
                alterar();
                break;
            case 3:
                listar();
                break;
            case 0:
                printf("Fim\n");
                return 0;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }
}
