#include <stdio.h>

int main(){

int idade;

scanf("%d",&idade);

if (idade < 18)
{
    while (idade <= 18)
    {
        printf("sua idade agr e %d \n", idade);
        idade++; 
    }
    
}else if (idade >= 18  )
{
    while (idade <= 100)
    {
            printf("sua idade agr e %d \n", idade); 
            idade++;
        
        
    }
    
}



}
