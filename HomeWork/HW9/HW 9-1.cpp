#include <stdio.h>
int main() {

    int n = 0 ;
    int array[ 100 ] ;

    while( n < 100 ) {
        printf( "Input [%d] : \n", n ) ;
        scanf( "%d", &array[ n ] ) ;
        if( array[ n ] == -1 ) {
            break ;
        }
        n++ ;
    }

    printf( "Index : " ) ;
    for( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", i ) ;
    }
    printf( "\n" ) ;

    printf( "Array : " ) ;
    for( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", array[ i ] ) ;
    }
    printf( "\n" ) ;

    return 0 ;
}