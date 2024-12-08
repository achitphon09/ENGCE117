#include <stdio.h>
int main() {

    int number ;

    printf( "Enter Number : \n" ) ;
    scanf( "%d", &number ) ;

    for( int i = number ; i >= 2 ; i-- ) {
        int prime_number = 1 ; //ให้เป็นเลขจำนวนเฉพาะ

        for( int j = 2 ; j * j <= i ; j++ ) {
            if( i % j == 0 ) {
                prime_number = 0 ; 
                break ;
            }
        }
        if( prime_number ) {
        printf( " %d", i ) ;
        }
    }
    printf( "\n" ) ;
    return 0 ;
}