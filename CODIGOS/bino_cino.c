#include <stdio.h>

int main(){

int bino, cino, total;

scanf("%d",&bino);
scanf("%d",&cino);

total = bino + cino;

if (total % 2 == 0)
{
    printf("Bino"); 
}
if (total % 2 == 1)
{
    printf("Cino"); 
}


}
