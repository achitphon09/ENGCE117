#include <stdio.h>
int main() {

    char    id[ 10 ] ;
    int     h ;
    float   salary ;
    float   total ;   

    printf( "Input the Employee ID(Max. 10 chars) :\n" ) ;
    scanf( "%s", id ) ;
    printf( "Input the working hrs :\n" ) ;
    scanf( "%d", &h ) ;
    printf( "Salary amount/hr :\n" ) ;
    scanf( "%f", &salary ) ;

    total = h * salary ;
    printf( "Expected Output :\n" ) ;
    printf( "Employee ID = %s \n", id ) ;
    printf( "Salary = U$ %.2f", total ) ;
    
    return 0 ;
}