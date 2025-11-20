#include <stdio.h>
#include <stdlib.h>

int main ( int argc , char * argv [] ) {
    char texto [ 20 ] = "Meu programa C";
    printf ("%s \n", texto ) ;
    printf ("%.3s \n", texto ) ;
    printf ("%.12s \n", texto ) ;

    system ( "pause" ) ;
    return 0;
};
