#include <stdio.h>

int Additional( int a, int b, int c ) ;

int main () {
    
    int a, b, c ;

    printf( "Input 1 : \n" ) ;
    scanf( "%d", &a ) ;
    printf( "Input 2 : \n" ) ;
    scanf( "%d", &b ) ;
    printf( "Input 3 : \n" ) ;
    scanf( "%d", &c ) ;

    printf( "Summation = %d (Calculate by Additonal Function)", Additional( a, b, c ) ) ;
    return 0 ;
}

int Additional( int a, int b, int c ) {
    return a + b + c ;
}