/*#include <stdio.h>

struct student (*GetStudent( int *room ) )[ 10 ] ;
int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
    return 0 ;
}//end function*/
#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
} ;

struct student ( *GetStudent( int *room ) )[ 10 ] ;
int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
    return 0 ;
}//end function

struct student ( *GetStudent( int *room ) )[ 10 ] {
    struct student ( *child )[ 10 ] = new struct student[ *room ][ 10 ] ;
    scanf( "%d", room ) ;
    for( int i = 1 ; i <= *room ; i++ ) {
        printf( "Room %d : \n", i  ) ;
        for( int j = 1 ; j <= 10 ; j++ ) {
            printf( "Student %d : ", j ) ;
            scanf( "%s %d", &child[ i ][ j ].name, &child[ i ][ j ].age ) ;
        }//end for
    }//end for
    for( int i = 1 ; i <= *room ; i++ ) {
            printf( "Room %d : 10 students entered.\n", i ) ;
            
        }//end for
        
    return child ;
}//end function

