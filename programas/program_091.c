#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int x = 5 ;
    printf ("Antes do scanf : x = %d \n", x ) ;
    printf ("Digite um numero : ") ;
    scanf ("%d", &x ) ;
    printf ("Depois do scanf : x = %d \n", x ) ;
    system ( "pause" ) ;
    return 0;


    void soma_mais_um ( int *n ) {
        *n = *n + 1;
        printf ("Dentro da funcao : x = %d \n", *n ) ;
    }
