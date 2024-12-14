#include <stdio.h>
#include <stdlib.h>
 
 int compare( const void *a, const void *b ) {
    return ( *( int * ) b - *( int * ) a ) ;
 }

 int main() {
    int number1, number2;

    printf( "Enter element of Array1 : \n" ) ;
    scanf( "%d", &number1 ) ;

    int array1[ number1 ] ;
    for( int i = 0 ; i < number1 ; i++ ) {
        printf( "--| Array1 [%d] : \n", i ) ;
        scanf( "%d", &array1[ i  ] ) ;
    }
    printf( "Enter element of Array2 : \n" ) ;
    scanf( "%d", &number2 ) ;

    int array2[ number2 ] ;
    for( int i = 0 ; i < number2 ; i++ ) {
        printf( "--| Array2 [%d] : \n", i ) ;
        scanf( "%d", &array2[ i ] ) ;
    }

    int number3 = number1 + number2 ;
    int array3[ number3 ] ;

    for( int i = 0 ; i < number1 ; i++ ) {
        array3[ i ] = array1[ i ] ;
    }
    for( int i = 0 ; i < number2 ; i++ ) {
        array3[ number1 + i ] = array2[ i ] ;
    }

    qsort( array3, number3, sizeof( int ), compare ) ;
    printf( "Merge Array1 & Array2 to Array3 \n" ) ;
    printf( "Array3 = " ) ;
    for( int i = 0 ; i < number3 ; i++ ) {
        printf( "%d ", array3[ i ] ) ;
    }
    return 0 ;
    }