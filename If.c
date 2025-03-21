#include <stdio.h>
int main(){
     
float temperatura, umidade;
unsigned int estoque, estoqueMinimo = 1000;

printf("Entre com a Temperatura: \n");
scanf("%f", &temperatura);
printf("Entre com a umidade: \n");
scanf("%f", &umidade);
printf("Entre com seu estoque: \n");
scanf("%u" , &estoque);


if(temperatura > 30){
    printf("Temperatura esta alta.\n");
} else {
    printf("Temperatura esta dentro dos parâmetros.\n");
}

if(umidade > 50){
     printf("umidade elevada.\n");
} else {
    printf("Umidade está dentro dos parametros");
}

if(estoque < estoqueMinimo){
    printf("Estoque abaixo do minimo\n");
} else {
     printf("Estoque normal!\n");
}

}