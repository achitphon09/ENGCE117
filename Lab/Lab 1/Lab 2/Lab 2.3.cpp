/*#include <stdio.h>

void explode( char str1[], char splitter, char str2[][10], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;
    int num ;
    explode( "I/Love/You", "/" ) ;
    return 0 ;
}//end function*/

#include <stdio.h>
#include <string.h>

void explode( char str1[ ], char splitter, char str2[ ][10], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;
    int num ;
    explode( "I/Love/You", '/', out, &num ) ;

    for( int i = 0 ; i < num ; i++ ) {
        printf("str2[%d] = %s\n", i , out[ i ] ) ; 
    }
    printf( "count = %d", num ) ;
    return 0 ;
}//end function

// *str[10]
// str[][10]
void explode( char str1[ ], char splitter, char str2[ ][ 10 ], int *count ) {
    int  j = 0 ;
    int k = 0;
    int len = strlen( str1 ) ;
    for( int i = 0 ; i < len ; i++ ) {
        if( str1[ i ] == splitter ) {
            str2[ k ][ j ] = '\0';
            k++ ;
            j = 0;
            continue ;
        }
        str2[ k ][ j ] = str1[ i ] ;
        j++ ;
    }
    *count = k + 1 ;
}


    