#include <stdio.h>
#include <math.h>

int main(){

float raio, pi, area;
pi = 3.1416;

scanf("%f", &raio);

area = pi * pow(raio, 2);

printf("%.2f", area); 

}
