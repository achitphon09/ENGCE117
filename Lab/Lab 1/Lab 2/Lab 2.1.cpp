/*#inclue <stdio.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    reverse( text, out ) ;
    return 0 ;
}//end function*/

#include <stdio.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    reverse( text, out ) ;
    return 0 ;
}//end function

void reverse( char str1[], char str2[] ) {
    int j = 0 ;
    for( int i = 50 ; i >= 0 ; i-- ) {
        str2[ j ] = str1[ i ] ;
        printf( "%c", str2[ j ] ) ;
        j++ ;
    }//end for
}//end function