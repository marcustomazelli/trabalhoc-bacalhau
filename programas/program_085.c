#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    printf ("Digite um numero inteiro  positivo : ") ;
    int x ;
    scanf ("%d", &x ) ;
    int fat = fatorial(x) ;
    printf ("O fatorial de %d eh : %d \n", x , fat ) ;
    system ( "pause" ) ;
    return 0;
};
