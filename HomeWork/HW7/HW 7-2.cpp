#include <stdio.h>
int main() {
    
    int start ; 
    int end ;
    int i ;
    int j ;

    printf( "Start : \n" ) ;
    scanf( "%d", &start ) ;
    printf( "End : \n" ) ;
    scanf( "%d", &end ) ;

    i = start ; 

    while( i <= end ) {
        j = 1 ;
        while( j <= 9 ) {
            printf( "%d x %d = %d\n", i, j, i * j ) ; 
            j++ ;
        }
        printf( "\n" ) ;
        i++ ;
    }
    return 0 ;
}