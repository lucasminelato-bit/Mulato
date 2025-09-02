#include <stdio.h>

int main(){
    //Operando com numeros interiros

/*
int a = 10;
int b = 3;
int soma = a + b;
int diferença = a - b;
int produto = a * b;
int quociente = a / b; // note que a divisao de inteiros resulta em numero inteiro
*/

//Operando com fracionais

float x = 5.5;
float y = 2.2;
float soma = x + y;
float diferença = x - y;
float produto = x * y;
float quociente = x / y; // divisão de ponto flutuante

//numero inteiros

/*
printf ("Soma: %d/n", soma);
printf ("diferença: %d/n", diferença);
printf ("produto: %d/n", produto);
printf ("quociente: %d/n", quociente);
*/

printf ("Soma: %.2f/n", soma);
printf ("diferença: %.2f/n", diferença);
printf ("produto: %.2f/n", produto);
printf ("Quociente: %.2f/n", quociente);

return 0;

}