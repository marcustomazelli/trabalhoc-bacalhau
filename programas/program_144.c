#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ( int argc , char * argv [] ) {
    int d, m, a ;
    printf ("Digite a data no formato dia / mes / ano : ") ;
    scanf ("%d/%d/%d",&d, &m, &a ) ;
    printf ("%d / %d / %d \n", d, m, a ) ;
    system ( "pause" ) ;
    return 0;
};
