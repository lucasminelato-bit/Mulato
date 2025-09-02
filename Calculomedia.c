#include <stdio.h>

int main (){

    float nota1, nota2, nota3;
    float media;

 printf("Programa de calculo de media\n");

 printf ("digite a nota1: \n");
 scanf("%f", &nota1);
 printf ("digite a nota2: \n");
 scanf("%f", &nota2);
 printf ("digite a nota3: \n");
 scanf("%f", &nota3);

media = ( nota1 + nota2 + nota3 ) / 3;

printf ("A media é: %.2f\n", media);


return 0;

}