#include <stdio.h>

void swap( int *a, int *b ) ;

int main() { 
    char nameA[ 50 ] ;
    char nameB[ 50 ] ;
    int ageA, ageB ;

    printf( "Input A : \n" ) ;
    printf( "Name : \n" ) ;
    scanf( "%s", &nameA ) ;
    printf( "Age : \n" ) ;
    scanf( "%d", &ageA ) ;

    printf( "\n" ) ;

    printf( "Input B : \n" ) ;
    printf( "Name : \n" ) ;
    scanf( "%s", &nameB ) ;
    printf( "Age : \n" ) ;
    scanf( "%d", &ageB ) ;

    printf( "\n" ) ;
    
    printf( "** RESULT **\n" ) ;
    printf( "Name: %s (%d)\n", nameA, ageA ) ;
    printf( "Name: %s (%d)\n", nameB, ageB ) ;

    swap( &ageA, &ageB ) ;

    printf( "\n" ) ;
    printf( "** SWAP AGE **\n" ) ;
    printf( "Name: %s (%d)\n", nameA, ageA ) ;
    printf( "Name: %s (%d)\n", nameB, ageB ) ;

    return 0 ;
}

void swap( int *a, int *b ) {
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}