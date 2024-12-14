#include <stdio.h>

int main() {

    int oldArray[] = { 9, 2, 6, 1, 7 }  ;
    int oldSize = 5 ;

    printf( "Old Array: " ) ;
    for( int i = 0 ; i < oldSize ; i++ ) {
        printf( "%d ", oldArray[ i ] ) ;
    }
    printf( "\n" ) ;

    int n ;
    printf( "Enter new element of Array: \n" ) ;
    scanf( "%d", &n ) ;

    int newArray[ n ] ;
    for( int i = 0 ;i < n ; i++ ) {
        printf( "Input: \n" ) ;
        scanf( "%d", &newArray[ i ] ) ;
    }
    int totalSize = oldSize + n ;
    int combinedArray[ totalSize ] ;
    for( int i = 0 ; i < oldSize ; i++ ) {
        combinedArray[ i ] = oldArray[ i ] ;
    }
    for( int i = 0 ; i < n ; i++ ) {
        combinedArray[ oldSize + i ] = newArray[ i ] ;
    }
    for( int i = 0 ;i < totalSize - 1 ; i++ ) {
        for( int j = i + 1 ; j< totalSize ; j++ ) {
            if( combinedArray[ i ] > combinedArray[ j ] ) {
                int temp = combinedArray[ i ] ;
                combinedArray[ i ] = combinedArray[ j ] ;
                combinedArray[ j ] = temp ;
            }
        }
    }
    printf( "New Array: " ) ;
    for( int i = 0 ; i < totalSize ; i++ ) {
        printf( "%d ", combinedArray[ i ] ) ;
    }
    return 0 ;
}