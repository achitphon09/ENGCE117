#include <stdio.h>
int main() {
    int row, col ;

    printf( "Array1 element: \n") ;
    scanf( "%d %d", &row, &col ) ;

    int array1[ row ][ col ] ;
    int array2[ row ][ col ] ;
    int array3[ row ][ col ] ;

    printf( "Input : \n" ) ;
    for( int i = 0 ; i < row ; i++ ) {
        for( int j = 0 ; j < col ; j++ ) {
            scanf( "%d", &array1[ i ][ j ] ) ;
        }
    }

    printf( "Array2 element: \n" ) ;
    scanf( "%d %d", &row, &col ) ; 
    printf( "input : \n" ) ;
    for( int i = 0 ; i < row ; i++ ) {
        for( int j = 0 ; j < col ; j++ ) {
            scanf( "%d", &array2[ i ][ j ] ) ;
        }
    }
    for( int i = 0 ; i < row ; i++ ) {
        for( int j = 0 ; j < col ; j++ ) {
            array3[ i ][ j ] = array1[ i ][ j ] + array2[ i ][ j ] ;
        } 
    }
    printf( "Array1 + Array2 = Array3\n" ) ;
    for( int i = 0 ; i < row ; i++ ) {
        for( int j = 0 ; j < col ; j++ ) {
            printf( "%d ", array3[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }
    return 0 ;
}