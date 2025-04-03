#include <stdio.h>

int main() {
    char tecla;

    printf("Pressione uma tecla e depois ENTER: ");
    scanf("%c", &tecla); // nao sabe tecla = valor
                        //entao precisa acessar endereco
                        //da variavel com o operador
    getchar(); //para pegar o proximo (segundo) caracter e "limpar a memória"
    printf("Voce pressionou a tecla '%c'\n", tecla);

    printf("Pressione outra tecla e depois ENTER?: ");
    scanf("%c", &tecla);
    getchar(); // adicionado pois estava lendo o enter
    printf("Voce pressionou a tecla '%C'\n", tecla);

    char nome[31];
    printf("Informe seu nome: ");
    scanf("%[^\n]s", nome); //[^\n]expressão regular: ache no final \n
    printf("Ola %s!\n", nome);

    return 0;
}