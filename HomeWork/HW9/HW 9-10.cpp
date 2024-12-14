#include <stdio.h>
int main() {
    int row, col ;

    printf( "Array element : \n" ) ;
    scanf( "%d %d", &row, &col ) ;

    int array[ row ][ col ] ;
    int transpose[ col ][ row ] ;

    printf( "Input : \n" ) ;
    for( int i = 0 ; i < row ; i++ ) {
        for( int j = 0 ; j < col ; j++ ) {
            scanf( "%d", &array[ i ][ j ] ) ;
        }
    }

    for( int i = 0 ; i < row ; i++ ) {
        for( int j = 0 ; j < col ; j++ ) {
            transpose[ j ][ i ] = array[ i ][ j ] ;
        }
    }
    printf( "--------------------------\n" ) ;
    printf( "Array\n" ) ;
    for( int i = 0 ; i < row ; i++ ) {
        for( int j = 0 ; j < col ; j++ ) {
            printf( "%d ", array[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }
    printf( "Array Transpose\n" ) ;
    for(int i = 0 ; i < col ; i++ ) {
        for( int j = 0 ; j < row ; j++ ) {
            printf( "%d ", transpose[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }
    return 0 ;
}