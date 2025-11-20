#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    printf ( "x = %d \n" , x ) ; //  acesso à variável global
    incr ( ) ;
    printf ( "x = %d \n" , x ) ; // acesso à variável global
    system ( "pause" ) ;
    return 0;
};
