/*#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    GetMatrix( &data, &m, &n ) ;
    return 0 ;
}//end function*/
#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int data[ 100 ], m, n ;
    GetMatrix( data, &m, &n ) ;
    
    /*if ( m == 0 && n == 0 ) {
        printf( "Matrix: (empty)\n" ) ;
        return 0 ;
    }// end if*/

    printf( "Matrix (%dx%d): \n", m, n ) ;
    for( int i = 0 ; i < m ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
            printf( "%d ", data[ i * n + j ] ) ;
        }//end for
    printf( "\n" ) ;
    }//end for
    return 0 ;
}//end function 

void GetMatrix( int value[], int *row, int *col ) {
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", row ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", col ) ; 

    if ( ( *row < 0 || *col < 0 ) || ( *row == 0 && *col > 0 ) || ( *row > 0 && *col == 0 ) ) {
        printf( "Error: Invalid matrix dimentions.\n" ) ;
        *row = *col = 0 ;
        return  ;
    }//end if

    if ( *row == 0 && *col == 0 ) {
        printf( "Matrix : \n(empty)" ) ; 
        return ; //end if 
    }

    printf( "Enter the elements of the matrix: " ) ;
    int total = *row * *col ;
    for( int i = 0 ; i < total ; i++ ) {
        if( scanf( "%d", &value[ i ] ) != 1 ) {
            printf( "Error: Incorrect number of elements.\n" ) ;
            *row = *col = 0 ;
            return ;
        }//end if
    }//end for
}//end function

    



