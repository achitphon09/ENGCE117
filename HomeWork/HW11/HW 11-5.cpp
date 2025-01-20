#include <stdio.h>

int Max_Height( int Height[ 10 ] ) ;
void Max_Age( int Age[ 10 ], int *maxAge ) ;

int main() {
    int Height[10] = { 159, 168, 191, 188, 154, 152, 167, 165, 178, 177 } ;
    int Age[10] = { 18, 19, 18, 17, 16, 18, 17, 18, 18, 18 } ;

    int maxHeight = Max_Height( Height ) ;
    printf( "Max Height = %d\n", maxHeight ) ;

    int maxAge ;
    Max_Age( Age, &maxAge ) ;
    printf( "Max Age = %d\n", maxAge ) ;

    return 0 ;
}

int Max_Height( int Height[ 10 ] ) {
    int max = -1 ;
    for( int i = 0 ; i < 10 ; i++ ) {
        if( Height[ i ] > max ) {
            max = Height[ i ] ;
        }
    } 
    return max ;
}

void Max_Age( int Age[ 10 ], int *maxAge ) {
    for( int i = 0 ; i < 10 ; i++ ) {
        if( Age[ i ] > ( *maxAge ) ) {
            *maxAge = Age[ i ] ;
        }
    }
}
