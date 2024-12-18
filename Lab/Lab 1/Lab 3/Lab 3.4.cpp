/*#include <stdio.h>

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;
    GetStudent( children, &group ) ;
    return 0 ;
}//end function*/
#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
} ;

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;
    GetStudent( children, &group ) ;
    return 0 ;
}//end function

void GetStudent( struct student child[][ 10 ], int *room )  {
    scanf( "%d", room ) ;
    for( int i = 1 ; i <= *room ; i++ ) {
        printf( "Room %d: \n", i ) ;
        for( int j = 1 ; j <= 10 ; j++ ) {
            printf( "Student %d : ", j ) ;
            scanf( "%s %d", &child[ i ][ j ].name, &child[ i ][ j ].age ) ;
        }//end for
    }//end for
    for( int i = 1 ; i <= *room ; i++ ) {
            printf( "Room %d : 10 students entered.\n", i ) ;
            
        }//end for
}//end function
