/*#include <stdio.h>
#include <string.h>

void GetSet( int [], int * ) ;

int main() {
 int *data, num ;
 GetSet( &data, &num ) ;
 return 0 ;
}//end function
*/

#include <stdio.h>
#include <string.h>

void GetSet( int data[], int *num ) ;

int main() {
    int data[ 100 ] ;
    int num ;
    GetSet( data, &num ) ;
    printf( "%d\n", num ) ; //แสดงจำนวนสมาชิกในเซ็ต

    for ( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[ i ] ) ;
    }
    printf( "\n" ) ;
    
    return 0 ;
}

void GetSet( int data[ ], int *num ) {
    scanf( "%d", num ) ;
    for (int i = 0 ; i < *num ; i++ ) {
        scanf( "%d", &data[ i ] ) ;
    } 
}




