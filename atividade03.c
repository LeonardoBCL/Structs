#include <stdio.h>
#include <stdlib.h>



void identifica_numero (int numero_1){
    int contador;
    for(contador = 1; contador <= 10; contador ++){
        printf("%d x %d = %d \n", numero_1, contador, numero_1 * contador);
    }
}

int main(){
    int numero_1;


    printf("Insira um numero: \n ");
    scanf("%d", &numero_1);

    identifica_numero(numero_1);

    return 0;

    


}



