#include <stdlib.h>

int main ( ) {

    float x ;
    float y = 3 ;
    // Correto
    x = y + 5 ;
    // ERRADO
    y + 5 = x ;
    // Correto
    x = 5 ;
    // ERRADO
    = x ;
    system ( "pause" ) ;
    return  0;
};
