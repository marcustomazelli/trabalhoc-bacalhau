#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num;


    printf ( "Digite um numero: " ) ;
    scanf ( "%d", &num) ;
    (num == 10) ?  printf ( "Numero e igual a 10" ) : printf ( "Numero e diferente de 10" ) ;
    system ( "pause" ) ;
    return 0;
};
