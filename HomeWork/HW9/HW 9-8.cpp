#include <stdio.h>
int main() {
 
 int number ;

 printf( "Enter new element of Array: \n" ) ;
 scanf( "%d", &number ) ;

 int array[ number ] ;
 for( int i = 0 ; i < number ; i++ ) {
    printf( "Input: \n" ) ;
    scanf( "%d", &array[ i ] ) ;
 }

 printf( "Array: " ) ;
 for( int i = 0 ; i < number ; i++ ) {
    printf( "%d ", array[ i ] ) ;
 }
 printf( "\n" ) ;

 for( int i = 0 ; i < number - 1 ; i++ ) {
    for( int j = i + 1 ; j < number ; j++ ) {
        if( array[ i ] < array[ j ] ) {
            int temp = array[ i ] ;
            array[ i ] = array[ j ] ;
            array[ j ] = temp ;
        }
    }
 }

 if( number >= 3 ) {
    printf( "The large 3rd element = %d\n", array[ 2 ] ) ;
 } else {
    printf( "Array does not have enough elements for 3 rd largest.\n" ) ;
 }
 return 0 ;   
}