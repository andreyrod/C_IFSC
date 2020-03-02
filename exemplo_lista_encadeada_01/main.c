#include<stdio.h>
#include<stdlib.h>

#include"conio.h"

#include "pessoa.h"
#include "listaEncadeada.h"

#include "tela.h"
#include "busca.h"
#include "menuCadastro.h"
#include "menuPrincipal.h"

int main() {
    criaLista();
    restauraPadraoPessoa();
    iniciarMenuPrincipal();
}
