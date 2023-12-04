#include <stdio.h>
#include <stdlib.h>

//Voids(Funções)

void cabecalho (){
    printf("\n===========================\n");
    printf("\n \t Senai \n");
    printf("\n============================\n");
}

void limpatela (){
    system("CLS||CLEAR");
}

int somar ( int primeiro_numero, int
segundo_numero){
    int soma_numeros;
    soma_numeros = primeiro_numero + segundo_numero;
    return soma_numeros;
}

/////////////////

int main() {

    int primeiro_numero;
    int segundo_numero;
    int soma;

    cabecalho();

    printf("Digite seu nome: \n ");
    scanf("%d", &primeiro_numero);

    printf("Digite sua idade: ");
    scanf("%d", &segundo_numero);

    soma = somar(primeiro_numero, segundo_numero);

    cabecalho();
    
    printf("Primeiro numero: %d \n", primeiro_numero);
    printf("Segundo numero: %d \n", segundo_numero);
    printf("Soma: %d", soma);

    return 0;

}