#include <stdio.h>
#define QTD 5

int idade[QTD];

int main()
{
    printf("Cadastro de idades\n");
    printf("------------------\n");
    for(int i = 0; i < QTD; i++) {
        printf("Digite a idade %d: ", i+1);
        scanf("%d", &idade[i]);
    }
    for(int i = 0; i < QTD; i++) {
        if(idade[i] >= 16) {
            printf("Idade maior ou igual a 16: %d\n", idade[i]);
        }
    }
    return 0;
}
