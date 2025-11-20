#include <stdio.h>
#include <stdlib.h>

int main ( int argc , char * argv [] ) {
    int n = 125 ;

    // octal e hexadecimal sem prefixo
    printf ("x = %o \n", n ) ;
    printf ("x = %X \n", n ) ;
    //octal e hexadecimal com prefixo
    printf ("x = %#o \n", n ) ;
    printf ("x = %#X \n", n ) ;
    float x = 5.00 ;
    //float sem ponto
    printf ("x = %.f \n", x ) ;
    //float com ponto
    printf ("x = %#.f \n", x ) ;
    system ( "pause" ) ;
    return 0;
};
