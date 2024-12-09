#include <stdio.h>
int main() {
    int number ;
    int term = 9 ;
    int sum = 0 ; 
    int i = 1 ;

    printf( "Enter Number : \n" ) ;
    scanf( "%d", &number ) ;

    printf( "Series : " ) ;

    do {
        printf( "%d", term ) ;
        sum += term ;
        if( i < number ){
            printf( " + " ) ;
        }
        term = term * 10 + 9 ;
        
        i++ ;
    }
    while ( i <= number ) ;
    printf("\nSum = %d\n", sum ) ;
    
    return 0 ;
}