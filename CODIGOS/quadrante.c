#include <stdio.h>

int main(){

int x, y;

scanf("%d",&x);
scanf("%d",&y);

if (y == 0 || x == 0)
{
    printf("eixos"); 
}else if (x > 0 && y > 0)
{
    printf("Q1"); 
}else if (x < 0 && y > 0)
{
    printf("Q2"); 
}else if (x > 0 && y < 0)
{
    printf("Q4"); 
}else if (x < 0 && y <0)
{
    printf("Q3"); 
}






}
