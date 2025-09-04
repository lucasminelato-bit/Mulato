#include <stdio.h>

int maind () {

float temperatura, umidade;
unsigned int estoque, estoqueMinimo = 1000;

printf(" Entre com a tempura: \n");
scanf("%f", &temperatura);
printf("Entre com a umidade: \n");
scanf("%f", &umidade);
printf("Entre com o estoque: \n");
scanf("%u", &estoque);

if (temperatura > 30){
    printf("temperatura esta alta\n");
} 
else {
    printf(" temperatura esta dentro dos parametros");    
}
if (umidade > 50){
    printf("umidade elevada\n");
} 
else {
    printf("Umidade esta dentro dos parametros\n");
}
if (estoque > estoqueMinimo){
    printf("Estoque esta abaixo do minimo\n");
} 
else {
    printf("Estoque esta dentro dos parametros\n");    
}


return 0;

}