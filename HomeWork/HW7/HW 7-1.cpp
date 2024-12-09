#include <stdio.h>
int main() {
    int number ;
    int i = 1 ;

    scanf( "%d", &number ) ;

    while( i <= number ) {
        if( number % 2 == 0 ) {
            printf( "(%d) Hello World\n", i ) ;
        } else {
            printf( "[%d] Hello World\n", i ) ;
        }
        i++ ;
    }
        
    return 0 ;
}