#include <stdio.h>
int main() {
    char frist_name[50] = "" ;
    char last_name[50] = "" ;
    
    printf( "First Name: " ) ;
    scanf( "%s",&frist_name ) ;

    printf( "Last Name: " ) ;
    scanf( "%s",&last_name ) ;


    printf( "%s %s TC, RMUTL, Chiang Mai, Thailand",frist_name,last_name ) ;
    return 0 ;

} 