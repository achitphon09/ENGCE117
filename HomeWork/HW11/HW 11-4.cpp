#include <stdio.h>

int SumOfSeries( int number ) ;

int main() {
    int number ;
    scanf( "%d", &number ) ;
    printf( "Sum = %d", SumOfSeries( number ) ) ;

    return 0 ;
}

int SumOfSeries( int number ) {
    int sum = 1 ; 
    int fact = 1 ;

    for( int i = 2 ; i <= number ; i++ ) {
        fact = fact * i ;
        sum += fact + ( i - 1 ) ;
    }

    return sum ;
}



