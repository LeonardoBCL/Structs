#include <stdio.h>
#include <stdlib.h>

void identifica_numero(int numero_1[])
{

    int contador_pares;
    int contador_impares;
    int contador = 0;

    for (contador = 0; contador < 6; contador++)
    {
        if (numero_1[contador] % 2 == 0)
        {
            contador_pares++;
        }
        else
        {
            contador_impares++;
        }
    }
    printf("\n Quantidade de pares: %d \n", contador_pares);
    printf("\n Quantidade de ímpares: %d \n", contador_impares);
}

int main()
{
    int numero_1[6];
    int contador = 0;

    for (contador = 0; contador < 6; contador++)
    {
        printf("Insira um numero: \n ");
        scanf("%d", &numero_1[contador]);
    }
    
    identifica_numero(numero_1);

    return 0;
}
