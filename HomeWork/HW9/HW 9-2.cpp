#include <stdio.h>
int main() {

    int n = 0 ;
    int array[ 100 ] ;

    while( n < 100 ) {
        printf( "Input[%d] : \n", n ) ;
        scanf( "%d", &array[ n ] ) ;
        if( array[ n ] == -1 ) {
            break ;
        }
        n++ ;
    }
    //เรียงจากน้อยไปมาก
    for( int i = 0 ; i < n -1 ; i++ ) {
        for( int j = 0 ; j < n - 1 ; j++ ) {
            if( array[ j ] > array[ j + 1 ] ) {
                int temp = array[ j ] ;
                array[ j ] = array[ j + 1 ] ;
                array[ j + 1 ] = temp ; 
            }
        }
    }

    printf( "0-99 : " ) ;
    for( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", array [ i ] ) ;
    }
    printf( "\n" ) ;


    //เรียงจากมากไปน้อย
    for( int i = 0 ; i < n -1 ; i++ ) {
        for( int j = 0 ; j < n - 1 ; j++ ) {
            if( array[ j ] < array[ j + 1 ] ) {
                int temp = array[ j ] ;
                array[ j ] = array[ j + 1 ] ;
                array[ j + 1 ] = temp ; 
            }
        }
    }
       printf( "99-0 : " ) ;
    for( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", array [ i ] ) ;
    }
    printf( "\n" ) ;

   return 0 ;
}