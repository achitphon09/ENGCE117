#include <stdio.h>

int main() {
    char arr[ 100 ] ;
    int  index = 0 ;   
    char c ;

    printf( "Enter 1 character : \n" ) ;

    while( c != 'y' || c!= 'Y' ) {
        scanf( " %c", &c ) ;
        printf( "Enter 1 character : \n" ) ;
        if( c == 'y' || c == 'Y' ) {
            break ;
        }
        arr[ index++ ] = c ;
    }

    printf( "String = " ) ;
    for( int i = 0 ; i < index ; i++ ) {
        printf( "%c ", arr[ i ]  ) ;
    }
    return 0 ;
}