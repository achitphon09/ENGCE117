#include <stdio.h>
int main() {
    int r1, r2, c1, c2 ;

    printf( "Array1 Value : \n" ) ;
    scanf( "%d %d", &r1, &c1 ) ;

    int array1[ r1 ][ c1 ] ;
    printf( "Array1 element : \n" ) ;
    for( int i = 0 ; i < r1 ; i++ ) {
        for( int j = 0 ; j < c1 ; j++ ) {
            scanf( "%d", &array1[ i ][ j ] ) ;
        }
    }

    printf( "Array2 Value : \n" ) ;
    scanf( "%d %d", &r2, &c2 ) ;

    if( c1 != r2 ) {
        printf( "Matrix multiplication not possible.\n" ) ;
        return 1 ;
    }

    int array2[ r2 ][ c2 ] ;
    printf( "Array2 element : \n" ) ;
    for( int i = 0 ; i < r2 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            scanf( "%d", &array2[ i ][ j ] ) ;
        }
    }

    int result[ r1 ][ c2 ] ;
    for( int i = 0 ; i < r1 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            result[ i ][ j ] = 0 ;
        }
    }

    for( int i = 0 ; i < r1 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            for( int k = 0 ; k < c1 ; k++ ) {
                result[ i ][ j ] += array1[ i ][ k ] * array2[ k ][ j ] ;
            }
        }
    }

     // แสดงผล Array1
    printf( "Array1\n" ) ;
    for( int i = 0 ; i < r1;  i++ ) {
        for( int j = 0 ; j < c1 ; j++ ) {
            printf( "%d ", array1[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }

    // แสดงผล Array2
    printf( "Array2\n" ) ;
    for( int i = 0 ; i < r2 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            printf( "%d ", array2[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }

    // แสดงผล Array1 x Array2
    printf( "Array1 x Array2\n" ) ;
    for( int i = 0 ; i < r1 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            printf( "%d ", result[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }
    return 0;
}