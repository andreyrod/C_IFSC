#ifndef PESSOA_H
#define PESSOA_H

int identificadorAtual = 0;

struct struct_pessoa {
    int identificador;
    char nome[50];
    char sobrenome[50];
    int idade;
};
struct struct_pessoa pessoa;

void restauraPadraoPessoa() {
    pessoa.identificador = -1;
    pessoa.nome[0] = '\0';
    pessoa.sobrenome[0] = '\0';
    pessoa.idade = 0;
}

int adicionaPessoaLista() {
    if (pessoa.identificador == -1 && pessoa.nome[0] == '\0' || pessoa.sobrenome[0] == '\0' || pessoa.idade == 0) {
        restauraPadraoPessoa();
        return 1;
    }

    if (inserePessoaLista(pessoa) == 1) {
        restauraPadraoPessoa();
        return 1;
    }

    restauraPadraoPessoa();
    return 0;
}

#endif
