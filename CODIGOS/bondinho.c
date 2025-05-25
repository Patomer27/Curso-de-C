#include <stdio.h>

int main(){

int a, m, total;

scanf("%d", &a);
scanf("%d", &m);

total = a + m;

if (total >= 1 && total <= 50)
{
    printf("S"); 
}
else
{
    printf("N"); 
}



}
