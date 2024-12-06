#include <stdio.h>
#include <string.h>

void explode( char str1[ ], char splitters[ ], char str2[ ][ 10 ], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;
    int num ;
    explode( "Apple,,Orange,Banana,,Grapes", ",-*!: /", out, &num ) ;


    for( int i; i < num ; i++ ) {
        printf( "str2[%d] = %s \n", i, out[ i ] );
    }//end for
    printf( "count = %d \n", num );

    return 0 ;
}//end function


// *str[10]
// str[][10]
void explode( char str1[], char splitters[], char str2[][ 10 ], int *count ) {
    int len = strlen( str1 ) ;

    if( len == 0 ) {
        *count = 0 ;
        return ;
    }//end if

    int k = 0 ;
    int j = 0 ;

    for( int i = 0 ; i < len ; i++ ) {
        
        if( strchr( splitters, str1[ i ] ) != NULL ) {
            
            if( i == ( len - 1 ) || strchr( splitters, str1[ i + 1 ] ) != NULL || j == 0 ) {
                continue ;
            }

            str2[ k ][ j ] = '\0' ; 
            j = 0 ; 
            k++ ; 
            continue ;
        }//end if

        str2[ k ][ j ] = str1[ i ] ;
        j++ ;
    }//end for
     str2[ k ][ j ] = '\0' ;
    *count = k + 1 ;
}//end function
