#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    FILE * arq ;
    arq = fopen ("texto.txt", "rt" ) ;
    if ( arq == NULL) {
        printf ("Erro na abertura do arquivo") ;
        system ( "pause" ) ;
        exit ( 1 ) ;
    }
    int  i ;
    for ( i = 0 ;  i < 5 ;  i ++){

        c = fgetc ( arq ) ;
        printf ("%c", c ) ;
    }
    fclose ( arq ) ;
    system ( "pause" ) ;
    return 0;
};
