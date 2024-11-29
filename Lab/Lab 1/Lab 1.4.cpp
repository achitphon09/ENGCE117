/*#include <stdio.h>

int GetSet( int [] ) ;

int main() {
    int *data, num ;
    num = GetSet( &data ) ;
    return 0 ;
}//end function*/

#include <stdio.h>

int GetSet( int data [ ] ) {
    int n, i ;

    printf( "Enter the number of elements: " ) ;
    scanf( "%d", &n ) ;

    printf( "Enter the elements: " ) ;
    for ( i = 0 ; i < n ; i++ ) {
        scanf( "%d", &data [ i ] ) ;
    }

    return n ;
}

int main() {
    int num ;
    int data[ 100 ] ;  // กำหนดอาร์เรย์ขนาดคงที่

    num = GetSet( data ) ;

    printf( "Number of elements: %d\n", num ) ;
    for (int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[ i ] ) ;
    }
    printf( "\n" ) ;

    return 0 ;
}
