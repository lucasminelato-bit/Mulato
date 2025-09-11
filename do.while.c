#include <stdio.h>

int main (){

    int numero;

    do {

        printf("digite um numero par para sair do programa...\n");
        scanf("%d", &numero); 

        if (numero % 2 == 0){
          printf("$d é par!", numero);
        } else {
            printf("%d é impar!", numero);    
        }
    } while (numero % 2 !=0);
    printf("Voce digitou um numero par, sando do programa...\n");
    
    return 0;
}