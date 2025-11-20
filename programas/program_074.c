#include <stdlib.h>

int main ( ) {

    int count ;
    char str1 [20] =  "Hello World" ,  str2 [20] ;
    for ( count = 0 ; str1 [count] ! = ' \0' ; count ++)
    str2 [count] = str1 [count] ;
    str2 [count] = ' \0' ;
    system ( "pause" ) ;
    return 0;
};
