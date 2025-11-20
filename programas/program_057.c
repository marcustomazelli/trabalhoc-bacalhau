#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int opcao = 0 ;
    while ( opcao != 5 ) {
        printf ("Escolha uma opcao entre 1 e 5 : ");
        scanf ("%d", &opcao ) ;
        // if  ( ( opcao > 5 )  ||  ( opcao < 1 ) )
        continue;
        printf ("Opcao escolhida : %d \n", opcao ) ;
    }
    system ( " pause" ) ;
    return 0;
};
