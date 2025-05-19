#include <stdio.h>

int main(){

int a , b;

/*tbm pode ser usado desta forma
int a;
int b;
*/

scanf("%d", &a);/* ler um numero inteiro e inclui este valor na variavel a */

printf("leu %d\n", a); /* imprime o valor dado a variavel a */

printf("--------------------------------------------------------------------------------------------\n"); 

printf("digite novos valores para as variaveis a e b\n"); 
scanf("%d",&a);/* ler um numero inteiro e inclui este valor na variavel a */
scanf("%d",&b);/* ler um numero inteiro e inclui este valor na variavel b */
printf("soma igual a %d\n", a+b); /* imprime a soma de a + b trocando %d pelo resultado da soma */

printf("--------------------------------------------------------------------------------------------\n"); 
printf("digite novos valores para as variaveis a e b\n"); 

    scanf(" %d%d", &a, &b);/* ler dois numeros inteiros e inclui este valor na variavel a e na variavel b */
    printf("soma = %d", a+b); /* imprime a soma de a + b trocando %d pelo resultado da soma */




  

}
