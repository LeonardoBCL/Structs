#include <stdio.h>
#include <stdlib.h>



void identifica_numero (int numero_1){
    
    if (numero_1 % 2 == 0){
        printf("Numero par reconhecido.");
    }
    else{
        printf("Numero impar reconhecido.");
    }
}

int main(){
    int numero_1;


    printf("Insira um numero: \n ");
    scanf("%d", &numero_1);

    identifica_numero(numero_1);

    return 0;

    


}
