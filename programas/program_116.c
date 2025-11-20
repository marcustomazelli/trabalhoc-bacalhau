#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    FILE * arq ;
    arq = fopen ("matriz.txt", "r") ;
    if ( arq == NULL) {
        printf ("Erro. \n") ;

        system ("pause") ;
        exit ( 1 ) ;
    }
    int i , j , v , soma = 0 ;
    while ( ! feof ( arq ) ) {
        fscanf ( arq , "%d" , &v ) ;
        soma += v ;
    }
    printf ("Soma = %d \n", som a ) ;
    fclose ( arq ) ;
    system ( "pause" ) ;
    return 0;
};
