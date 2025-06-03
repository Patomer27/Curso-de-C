#include <stdio.h>

int main(){

int id;

scanf("%d",&id);

switch (id){
case 1:
    printf("papel"); 
    break;
case 2:
    printf("tesoura");
    break; 
case 3:
    printf("cola"); 
    break;
case 4:
    printf("caneta"); 
    break;
default:
printf("digite um numero valido"); 
    break;
}
}
