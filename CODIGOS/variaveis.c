#include <stdio.h>

int main(){

    int x ; /* define que a variavel x é do tipo int */
    x = 5;  /* define que a variavel x recebe o valor 5 */

    printf("%d\n",x);  /* imprime o valor de x */

    x = 6; /* muda o valor da variavel x para 6 */
    printf("%i\n", x); /* iprime o novo valor de x */

/* ------------------------------------------------------------------------------------------------------------------ */

    int const constante = 1; /* uma variavel const n pode ter seu valor mudado sera sempre o mesmo */
    printf("%i\n", constante); /* imprime o valor da variavel const */


}
