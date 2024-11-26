#include <stdio.h>

int main() {
    char frist_name[50] = "" ;
    char last_name[50] = "" ;
    
    printf( "First Name:" ) ;
    scanf( "%s",&frist_name ) ;

    printf( "Last Name: " ) ;
    scanf( "%s",&last_name ) ;

    for(int i=0;i<3;i++) {
        
        if( i==2 ) {
            if(frist_name[i] == 'C') {
                frist_name[i] = 'C' + 1;
            }
        }
    }
    printf( "%s %ss TC, RMUTL, Chiang Mai, ThAailand",frist_name,last_name ) ;
    return 0 ;

} 