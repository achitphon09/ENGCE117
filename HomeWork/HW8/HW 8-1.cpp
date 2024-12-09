#include <stdio.h>
int main() {

        int number ;
        int n ;
        int sum = 0 ; 
        float average ; 


        printf( "Enter value n : \n" ) ;
        scanf( "%d", &n ) ;

        for( int i = 1 ; i <= n ; i++ ) {
            printf( "Enter number %d : \n", i ) ;
            scanf( "%d", &number ) ;
            sum += number ;
        }
        average = ( float ) sum / n ;

        printf( "Sum = %d\n", sum ) ;
        printf( "Avg = %.2f\n", average ) ;


    return 0 ;
}