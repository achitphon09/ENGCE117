#include <stdio.h>
int main() {

    int score ;

    printf( "enter score : \n" ) ;
    scanf( "%d", &score ) ;

    for( int i = 0 ; i < 8 ; i++ ) {
        if( i == 0 && score >= 80 ) {
            printf( "A !" ) ;
            break ; 
        }
        else if( i == 1 && score >= 75 && score < 80 ) {
            printf( "B+ !" ) ;
            break ;
        }
        else if( i == 2 && score >= 70 && score < 75 ) {
            printf( "B !" ) ;
            break ;
        } 
        else if( i == 3 && score >= 65 && score < 70 ) {
            printf( "C+ !" ) ;
            break ;
        }
        else if( i == 4 && score >= 60 && score < 65 ) {
            printf( "C !" ) ;
            break ;
        }
        else if( i == 5 && score >= 55 && score < 60 ) {
            printf( "D+ !" ) ;
            break ;
        }
        else if( i == 6 && score >= 50 && score < 55 ) {
            printf( "D !" ) ;
            break ;
        }
        else if( i == 7 && score < 50 ) {
            printf( "F !" ) ;
            break ;
        }
    }
    return 0 ;
}