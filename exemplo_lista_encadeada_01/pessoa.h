#ifndef PESSOA_H
#define PESSOA_H

struct struct_pessoa {
    char nome[50];
    char sobrenome[50];
    int idade;
};
struct struct_pessoa pessoa;

void restauraPadraoPessoa() {
    pessoa.nome[0] = '\0';
    pessoa.idade = 0;
}

#endif
