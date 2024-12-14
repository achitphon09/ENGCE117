#include <stdio.h>
#include <stdlib.h>

int compare( const void *a, const void *b ) {
    return ( * ( int * ) a - * ( int * ) b ) ;
}
int main() {
    int n ;

    printf( "Input N : \n" ) ; 
    scanf( "%d", &n ) ;
    int arr[ n ] ;
    for( int i = 0 ; i < n ; i++ ) {
        printf( "Input : \n" ) ;
        scanf( "%d", &arr[ i ] ) ;
    }

    qsort( arr, n, sizeof( int ), compare ) ;
    printf( "Unique value : " ) ;
    for( int i = 0 ; i < n ; i++ ) {
        if( ( i == 0 || arr[ i ] != arr[ i - 1 ] ) && ( i == n -1 || arr[ i ] != arr[ i + 1 ] ) ) {
            printf( "%d ", arr[ i ] ) ;
        }
    }

    return 0 ;
}