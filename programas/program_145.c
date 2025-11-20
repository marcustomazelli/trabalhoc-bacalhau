#include <stdio.h>
#include <stdlib.h>

int main ( int argc , char * argv [] ) {
    char texto [ 20 ] ;
    printf ("Digite algumas vogais : ") ;
    scanf ("%[aeiou]", texto ) ;
    printf ("Texto : %s \n", texto ) ;
    system ( "pause" ) ;
    return 0;
};
