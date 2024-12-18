#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void upgrade( struct student child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    upgrade( aboy ) ;
    printf( "%.2f", aboy.gpa ) ;
    return 0 ;
}//end function

void upgrade( struct student child ) {
    if( child.gpa == 4.00 ) {
        child.gpa = 4.00 ;
    }//end if
    else if( child.gpa == 0.00 ) {
        child.gpa = 0.00 ;
    }//end else if
    else if( child.sex == 'M' ) {
         child.gpa += child.gpa * 0.10 ;
    }//end else if
    else if( child.sex == 'F' ) {
        child.gpa += child.gpa * 0.20 ;
    }//end else if
     printf( "In function %.2f\n", child.gpa) ;  
    }//end function

  
