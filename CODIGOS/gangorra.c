#include <stdio.h>

int main(){

float p1, p2, c1, c2, pc1, pc2;
scanf("%f", &p1);
scanf("%f", &c1);
scanf("%f", &p2);
scanf("%f", &c2);

pc1 = p1 * c1;
pc2 = p2 * c2;

if (pc1 == pc2)
{
    printf("0"); 
}
if (pc1 > pc2)
{
    printf("-1"); 
}
if (pc2 > pc1)
{
    printf("1"); 
}



}
