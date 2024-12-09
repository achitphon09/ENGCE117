#include <stdio.h>
int main() {

    int n ;
    int first = 1 ;
    int second = 1 ;
    int next ;
    int sum = 0 ;

    scanf( "%d", &n ) ; 
    printf( "Series : " ) ;
    for( int i = 1 ; i <= n ; i++ ) {
        if( i == 1 || i == 2 ) {
            next = 1 ;
        } else {
        next = first + second ;
        first = second ;
        second = next ;
    }

    sum += next ;
    printf( "%d", next ) ;
    if( i < n ) {
        printf( " + " ) ;
    }
}
    printf( "\nSum : %d\n", sum ) ;
    return 0 ;
}