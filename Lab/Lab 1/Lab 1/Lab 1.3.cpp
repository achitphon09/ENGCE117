/*#include <stdio.h>
int *GetSet( int * ) ;

int main() {
 int *data, num ;
 data = GetSet( &num ) ;
 return 0 ;
}//end function
*/
#include <stdio.h>

int *GetSet( int * ) ;

int main() {
    int *data, num ;
    data = GetSet( &num ) ;

    printf( "Number of elements: %d\n ", num ) ;

    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[ i ] ) ;
    }
    return 0 ; 
}

int *GetSet( int *num ) {
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", num ) ;
    int *j ;
    j = new int[ *num ] ;

    printf( "Enter the elements: " ) ;
    for( int i = 0 ; i < ( *num ) ; i++ ) {
        scanf( "%d", &j[ i ] ) ;
    }
    return j ;
}

