#include <stdio.h>
#include <stdlib.h>

int main ( int argc , char * argv [] ) {
    char texto [ 20 ] ;
    printf ("Digite  letras e números : ") ;
    scanf ("%[A -Z0-9]", texto) ;
    printf ("Texto : %s \n", texto) ;
    system ( "pause" ) ;
    return 0;
};
