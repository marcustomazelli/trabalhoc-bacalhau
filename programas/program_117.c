#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    FILE * arq ;
    arq = fopen ("Posicao.txt", "w") ;
    if ( arq == NULL)  {
        printf ("Problemas na CRIACAO do arquivo \n") ;
        system ("pause") ;
        exit ( 1 ) ;
    }
    fputs ("1234567890", arq ) ;
    fseek ( arq , 5 , SEEK_SET) ;
    fputs ("abcde", arq ) ;
    fclose ( arq ) ;
    system ( "pause" ) ;
    return 0;

};
