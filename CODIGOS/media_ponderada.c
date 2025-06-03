#include <stdio.h>

int main(){

float n1,n2,media;

scanf("%f",&n1);
scanf("%f",&n2);

media = ((n1*2)+(n2*3)) /5;

if (media >= 7)
{
    printf("aprovado"); 
}else if (media < 3)
{
    printf("Reprovado"); 
}else
{
    printf("final"); 
}




}
