#include <stdio.h>
#include <stdlib.h>

int main ( int argc , char * argv [] ) {
    char texto [ 20 ] ;
    printf ("Digite algumas letras : ") ;
    scanf ("%[A -Z]", texto ) ;
    printf ( "Texto : %s \n", texto ) ;
    system ( "pause" ) ;
    return 0;
};
