/*#inclue <stdio.h>
char* reverse( char str1[]) ;
int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;
    out = reverse( text ) ;
}//end function*/

#include <stdio.h>
char* reverse( char str1[] ) ;
int main() {
    char text[ 50 ] = "The quick  brown    fox." ;
    char *out ;
    out = reverse( text ) ;
}

char* reverse ( char str1[] ) {
    int j = 0 ;
    char str2[ 50 ] ;
    for( int i = 50 ; i >= 0 ; i-- ) {
        str2[ j ] = str1[ i ] ;
        printf( "%c", str2[ j ] ) ;
        j++ ;
    }
    return str2 ;
}

