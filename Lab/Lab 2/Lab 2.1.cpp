#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    reverse( text, out ) ; 
    return 0 ;
}//end function

void reverse( char text[], char out[] ) {
    int length = strlen( text ) ;

    for( int i = 0 ; i < length ; i ++ ) {
        out[ i ] = text[ length -1 -i ] ;
        
    }
    for( int i = 0 ; i < length ; i ++ ) {
        printf( "%c", out[ i ] ) ; 
    }

}


