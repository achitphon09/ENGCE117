#include <stdio.h>
int main() {

    int number ;
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    scanf( "%d", &number ) ;
    printf( "%d = ", number ) ;

    for( int i ; i < 13 ; i++ ) {
        while (number >= values[ i ] ) {
            printf( "%s", symbols[ i ] ) ;
            number -= values[ i ] ; 
        }
    } 
    printf( "\n" ) ;
    return 0 ;
}