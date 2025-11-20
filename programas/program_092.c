#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int x = 5;
    printf ("Antes da funcao : x = %d \n", x ) ;
    soma_mais_um ( &x ) ;
    printf ("Depois da funcao : x = %d \n", x ) ;
    system ( "paus e" ) ;
    return 0;
};
