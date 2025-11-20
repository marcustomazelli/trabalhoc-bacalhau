#include <stdio.h>
#include <stdlib.h>

int main ( int argc , char * argv [] ) {
    int n = 125 ;
    int largura = 10 ;
    // l argura definida dentro do campo
    printf ("n = %10d \n", n ) ;
    // l argura definida por uma variável

    printf ("n = %*d \n", largura , n ) ;
    system ( "pause" ) ;
    return 0;
};
