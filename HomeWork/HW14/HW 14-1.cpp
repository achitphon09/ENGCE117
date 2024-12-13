#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void RandomArr( int [], int ) ;
void ShowArr( int [], int ) ;
int FindMinPosition( int [], int ) ;
int FindMaxPosition( int [], int ) ;
int main() {
    int n ;  
    printf( "Input N : \n") ;
    scanf( "%d", &n ) ;
    
    int Num[ n ] ;
  
    RandomArr( Num, n ) ;
    ShowArr( Num, n ) ;
    int Min =  FindMinPosition( Num, n ) ;
    int Max =  FindMaxPosition( Num, n ) ;
    printf( "Min Value = %d\n", Min ) ;
    printf( "Max Value = %d\n", Max ) ;
    return 0 ;
}//end funtion
void RandomArr( int inputArr[ ], int n ) {
    int i = 0 ;
    srand( time( NULL ) ) ;
    for( i = 0 ; i < n ; i++ ) inputArr[ i ] = rand() % 90 + 10 ;
}//end function
void ShowArr( int InputArr[ ], int n ) {
    int i = 0 ;
    printf( "\n----| %6s : ", "i" ) ;
    for( i = 0 ; i < n ; i++ ) printf( "%3d", i ) ;
    printf( "\n----| %6s : ", "Array" ) ;
    for( i = 0 ; i < n ; i++ ) printf( "%3d", InputArr[ i ] ) ;
    printf( "\n" ) ; 
}//end function
int FindMaxPosition( int InputArr[ ], int n ) {
   
    int Max = -100 ;
    for( int i = 0 ; i < n ; i++ )
        if( InputArr[ i ] > Max ) {
            Max = InputArr[ i ] ;
           
        }//end if
        return Max ;
}//end int
int FindMinPosition( int InputArr[ ], int n ) {
   
    int Min = 100 ;
    for( int i = 0 ; i < n ; i++ )
        if( InputArr[ i ] < Min ) {
            Min = InputArr[ i ] ;
           
        }//end if
        return Min ;
}//end int