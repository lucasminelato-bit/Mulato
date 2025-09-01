#include <stdio.h>

int main (){

    /*
    Incremento (++);
    Pré-Invremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-decremento --a
    Pós-decremento a--
     */

int numero1 = 1, resultado;

printf ("Antes Incremento: %d/n", numero1);
//numero1 = numero1+1;
//numero1 += 1;

//Pós Incremento:
//resultado = numero1:
//numero1++;

resultado = numero1++;

numero1++; 
//printf ("Após Incremento: %d/n", numero1);
printf ("Após Pós-Incremento - numero 1: %d - resultado: %d/n", numero1, resultado);

resultado = ++numero1;

numero1++; 
//printf ("Após Incremento: %d/n", numero1);
printf ("Após Pré-Incremento - numero 1: %d - resultado: %d/n", numero1, resultado);

//numero1 = numero1 - 1;
//numero1 -= 1;

numero1--;
printf ("Após Decremento: %d/n", numero1);

resultado = numero1--;
printf ("Após Pos-Incremento - numero 1: %d - resultado: %d/n", numero1, resultado);

resultado = --numero1;
printf ("Após Pré-Incremento - numero 1: %d - resultado: %d/n", numero1, resultado);

}
