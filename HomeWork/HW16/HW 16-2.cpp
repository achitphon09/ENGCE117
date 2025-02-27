#include <stdio.h>

int BinarySearch( int data[], int n, int find ) ;

int main() {
    int RealData[ 6 ] = { 1, 2, 4, 5, 8, 9 } ;
    printf( "Found in %d\n", BinarySearch( RealData, 6, 8 ) ) ;
    return 0 ;
}//end function

int BinarySearch( int data[], int n, int find ) {
    int Output = -1 ;
    int i, j, m ;
    i = 0 ; j = n - 1 ;
    while( i < j ) {
        m = ( i + j ) / 2 ;
        if( data[ m ] < find ) 
            i = m + 1 ;
        else 
        j = m ;
    }
    Output = ( data[ i ] == find ? i : -1 ) ;
    return Output ;
}