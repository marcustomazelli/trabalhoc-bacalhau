#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    FILE * arq ;

    arq = fopen ("texto.txt", "rt" ) ;
    if ( ! arq ) {
        printf ("Erro na abertura do arquivo") ;
        system ( "pause" ) ;
        exit ( 1 ) ;
    }
    while ( ! feof ( arq ) ) {
        c = fgetc ( arq ) ;
        printf ("%c", c ) ;
    }
    fclose ( arq ) ;
    system ( "pause" ) ;
    return 0;
};
