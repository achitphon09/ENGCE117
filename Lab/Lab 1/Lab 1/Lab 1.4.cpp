/*#include <stdio.h>

int GetSet( int [] ) ;

int main() {
    int *data, num ;
    num = GetSet( &data ) ;
    return 0 ;
}//end function*/

#include <stdio.h>

int GetSet( int *data [ ] ) {
    int n ;
    *data = new int[ n ] ;
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", &n ) ;

    printf( "Enter the elements: " ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        scanf( "%d", &( *data ) [ i ] ) ;
    }//end for

    return n ;
}//end function

int main() {
    int num ;
    int *data ;  // กำหนดอาร์เรย์ขนาดคงที่

    num = GetSet( &data ) ;

    printf( "Number of elements: %d\n", num ) ;
    for (int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[ i ] ) ;
    }//end for
    printf( "\n" ) ;

    return 0 ;
}//end function
