#include <stdio.h>

int main(){

int numero1, numero2;

printf("digite o 1 numero:"); 
scanf("%i",&numero1);
printf("digite o 2 numero:"); 
scanf("%i",&numero2);

    if (numero1 < numero2)
    {
        printf("o numero %i e menor que o numero %i", numero1,numero2); 
    }
    if (numero1 > numero2)
    {
        printf("o numero %i e maior que o numero %i", numero1,numero2);
    }
    if (numero1 == numero2)
    {
        printf("os numeros sao iguais"); 
    }
    
    
    
    

}
