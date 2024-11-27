#include <stdio.h>

int main() {
    
    int days ;
    int sec ;

    printf( "Input Days : \n" ) ;
    scanf( "%d", &days ) ;

    sec = days * 86400 ;
    printf( "%d Days = %d seconds",days , sec  ) ;

    return 0 ;
}