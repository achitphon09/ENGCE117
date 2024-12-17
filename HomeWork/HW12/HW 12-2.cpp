#include <stdio.h>
#include <string.h>

struct student {
    char name[ 100 ] ;
    float score ;
} ;

void Score( char *name, float *score ) ;
void sortStudents( struct student students[ ], int n ) ;

int main() {
    struct student students[ 4 ] ; 

    for( int i = 0 ; i < 4 ; i++ ) {
        printf( "Student %c : \n", 'A' + i ) ;
        Score( students[ i ].name, &students[ i ].score ) ;
        printf( "\n" ) ;
    }

    
    sortStudents( students, 4 ) ;

    
    printf( "Output :\n    " ) ;
    for( int i = 0 ; i < 4 ; i++ ) {
        printf( "%s ", students[ i ].name ) ; 
    }
    printf( "\n    " ) ;
    for( int i = 0 ; i < 4 ; i++ ) {
        printf( "%.2f ", students[ i ].score ) ;
    }
    printf( "\n" ) ;

    return 0 ;
}

void Score( char *name, float *score ) {
    printf( "Name : \n" ) ;
    scanf( "%s", name ) ;
    printf( "Score : \n" ) ;
    scanf( "%f", score ) ;
}

void sortStudents( struct student students[ ], int n ) {
    struct student temp ;
    for( int i = 0 ; i < n - 1 ; i++ ) {
        for( int j = 0 ; j < n - i - 1 ; j++ ) {
            if( students[ j ].score < students[ j + 1 ].score ) {
                temp = students[ j ] ;
                students[ j ] = students[ j + 1 ] ;
                students[ j + 1 ] = temp ;
            }
        }
    }
}