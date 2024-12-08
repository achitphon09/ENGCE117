#include <stdio.h>

int main() {
    int number, term = 0, sum = 0;

    printf( "Enter number : \n" ) ;
    scanf( "%d", &number ) ;

    printf( "Series = " ) ;
    for( int i = 1 ; i <= number ; i++ ) {
        term = term * 10 + 9 ; 
        sum += term ;          

        printf( "%d", term ) ;   
        if ( i < number ) {
            printf( " + " ) ;    
        }
    }

    printf( "\nSum = %d\n", sum ) ;

    return 0 ;
}