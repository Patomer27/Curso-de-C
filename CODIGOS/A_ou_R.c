#include <stdio.h>

int main(){

float n1, n2, media;

scanf("%f",&n1);
scanf("%f",&n2);

media = (n1 + n2) / 2;

if (media >= 7)
{
    printf("Aprovado"); 
}
if (media < 7 && media >= 4)
{
    printf("Recuperacao"); 
}
if (media < 4)
{
    printf("Reprovado"); 
}






}
