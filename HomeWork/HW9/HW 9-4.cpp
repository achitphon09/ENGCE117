#include <stdio.h>

int main() {
    int number ;

    printf( "Input N:\n" ) ;
    scanf( "%d", &number ) ;

    int arr[ number ] ;   // ประกาศอาเรย์ขนาด n
    int count[ 101 ] = { 0 } ; // ใช้ตัวนับสำหรับค่าที่อยู่ในช่วง 0-100 (ปรับตามความเหมาะสม)

    // รับค่าจากผู้ใช้และเก็บในอาเรย์
    for( int i = 0 ; i < number ; i++ ) {
        printf( "Element[%d]:\n", i ) ;
        scanf( "%d", &arr[ i ] ) ;
        if( arr[ i ] >= 0 && arr[ i ] <= 100 ) {
            count[ arr[ i ] ]++ ; // เพิ่มตัวนับ
        } else {
            printf( "Error: Value out of range (0-100).\n" ) ;
            return 1 ; // สิ้นสุดโปรแกรมเมื่อมีค่าเกินช่วง
        }
    }

    // แสดงผล
    printf( "\nOutput:\n" ) ;
    for( int i = 0 ; i <= 100 ; i++ ) {
        if( count[ i ] > 0 ) {
            printf( "%d -> %d value%s.\n", i, count[ i ], count[ i ] > 1 ? "s" : "" ) ;
        }
    }
    return 0 ;
}
