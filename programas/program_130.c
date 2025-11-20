#include <stdio.h>
#include <stdlib.h>

int main ( int argc , char * argv [] ) {
    int n = 5 ;
    // com espaçoes ( padrão )
    printf ("n = % 5d \n", n ) ;
    // com zeros
    printf ("n = %05d \n", n ) ;
    system ( "pause"  ) ;
    return 0;
};
