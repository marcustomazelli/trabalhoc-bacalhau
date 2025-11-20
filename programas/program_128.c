#include <stdio.h>
#include <stdlib.h>

int main ( int argc , char * argv [] ) {
    int n = 5 ;
    // justifica a direita
    printf ("n = %5d \n", n ) ;
    // justifica a esquerda
    printf ("n = % -5d\n", n ) ;
    system ( "pause" ) ;
    return 0;
};
