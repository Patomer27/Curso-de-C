#include <stdio.h>

int main(){

int ce, cc, ppq;
float peso, imposto, pdc, total;

printf("digte o codigo do estado: "); 
scanf("%d",&ce);

switch (ce){
    case 1 :
    imposto = 0.4;
    break;
case 2:
    imposto = 0.15;
    break;
case 3:
    imposto = 0.1;
    break;
case 4:
imposto = 0.05;
    break;
default:
    break;
}

printf("digite o peso da carga em toneladas: "); 
scanf("%f", &peso);

peso = peso * 1000;

printf("digite o codigo da carga: "); 
scanf("%d", &cc);

if (cc <= 20 && cc >= 10)
{
    ppq = 180;
}else if (cc >= 21 && cc <= 30)
{
    ppq = 120;
}else if (cc >= 31 && cc <= 40 )
{
    ppq = 230;
}

pdc = ppq * peso;

imposto = imposto * pdc;

total = pdc + imposto;

printf("o peso da carga em quilos e %.2f  o preco da carga e %.2f o imposto e de %.2f com valor total de %.2f ", peso, pdc, imposto, total); 




}


