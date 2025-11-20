#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ( ) {
    FILE * arq ;
    arq = fopen ( "ArqBin.bin", "rb" ) ;
    if ( arq == NULL) {
        printf("Problemas na ABERTURA do arquivo \n") ;
        system ("pause") ;
        exit( 1 ) ;
    }
    int i , totallido , v [ 5 ] ;
    // le 5 posicoes inteiras do arquivos
    totalli do = fread ( v , sizeof ( int ) , 5 , arq ) ;
    if ( totallido != 5 ) {
        printf ("Erro na leitura do arquivo !") ;
        system ("pause") ;
        exit ( 1 ) ;
    } else {
        for ( i = 0 ;  i < 5 ;  i ++)
        printf ("v[%d] = %d \n", i , v [ i ] ) ;
    }
    fclose  ( arq ) ;
    system ( "pause" ) ;
    return 0;
};
