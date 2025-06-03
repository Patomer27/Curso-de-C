#include <stdio.h>

int main(){

int x;    

scanf("%d",&x);

if( x >= 7){ // checa se x eh maior ou igual a  7
    printf("Aprovado!\n");
}

else if( x < 4 ){ // caso a condicao acima seja falsa, testa se x eh menor que 4
    printf("Reprovado!\n");
}

else{ // caso todas as condicoes acima sejam falsas
    printf("Avaliacao final!\n");
}

}
