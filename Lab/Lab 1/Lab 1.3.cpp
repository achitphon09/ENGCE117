/*#include <stdio.h>
int *GetSet( int * ) ;

int main() {
 int *data, num ;
 data = GetSet( &num ) ;
 return 0 ;
}//end function
*/
#include <stdio.h>
#include <stdlib.h> 

int *GetSet(int *num);

int main() {
    int *data, num ;
    data = GetSet( &num ) ;

    printf( "Number of elements : %d\n", num ) ;  // แสดงจำนวนสมาชิก
    for ( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data [ i ] ) ;  // แสดงสมาชิกในบรรทัดเดียว
    }
    printf( "\n" ) ;

    free( data ) ; //คืนค่าหน่วยความจำที่จองไว้

    return 0 ;
}

int *GetSet( int *num ) {
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", num ) ;

    int *data = (int *) malloc ((*num) * sizeof(int));
    if (data == NULL) {
        printf("Memory allocation failed\n");
        exit(1);  // ออกจากโปรแกรมหากจองหน่วยความจำไม่สำเร็จ
    }

    printf( "Enter the elements: " ) ;
    for (int i = 0 ; i < *num ; i++ ) {
        scanf( "%d", &data[ i ] ) ;
    }

    return data ;
}

