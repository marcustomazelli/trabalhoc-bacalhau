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
    while ( ( c = fgetc ( arq ) ) ! = EOF)
    printf ("%c", c ) ;
    fclose ( arq ) ;
    system ( "pause" ) ;
    return 0;
};
