#include <stdio.h>

int main() {
    int number ;

    scanf( "%d", &number ) ;

    for( int i = 1 ; i <= number ; i++ ) {
        if( number % 2 == 0 ) {
            printf( "(%d) Hello World\n", i ) ;
        } else {
            printf("[%d] Hello world\n", i ) ;
        }

    }
    return 0 ;
}