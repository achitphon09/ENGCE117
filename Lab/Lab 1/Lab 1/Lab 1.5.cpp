/*#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    GetMatrix( &data, &m, &n ) ;
    return 0 ;
}//end function*/
#include <stdio.h>

void GetMatrix( int *value[ ], int *row, int *col ) ;// ประกาศใช้ฟังก์ชั่น  GetMatrix

int main() {
    int *data, m, n ;//ประกาศตัวแปรสำหรับเก็บข้อมูลเมทริกและขนาด
    GetMatrix( &data, &m, &n ) ;//เรียกใช้ฟังก์ชั่น
    return 0 ;
}//end function

 void GetMatrix( int *value[ ], int *row, int *col ) {
    

    printf( "Enter the number of rows: " ) ;
    scanf( "%d", row ) ;//ใส่แถว
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", col ) ;//ใส่คอลัมน์ 

    for( int i = 0 ; i < *row * *col ; i++ ){
        value[ i ] = new int[ i ] ;
    }//end for

    if( *row == 0 && *col == 0 ) {
        printf( "Matrix: (empty)\n" ) ;
    }
    else if( ( *row == 0 && *col > 0 ) || ( *row > 0 && *col == 0 ) ) {
        printf( "Error: Invalid matrix dimensions.\n" ) ;
    }else{
        printf( "Enter the elements of matrix: " ) ;
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                scanf( "%d", &value[ i * ( *col ) + j ]  ) ; 
                if( getchar() == '\n' &&  i == *row - 1 && j == *col - 2 ) {
					printf( "Error: Invalid matrix input" ) ;
					return ;
				}//end if
            }//end for
        }//end for

        printf( "Matrix (%dx%d): \n", *row, *col ) ;
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                printf( "%d ", value[ i * ( *col ) + j ] ) ;//แสดงค่าทีละตัว
            }
            printf( "\n" ) ;
        }//end for
    }//end else
 }//end function
    



