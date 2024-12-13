#include <stdio.h>

int main() {
    int Array1[ 100 ] ; // อาเรย์ต้นฉบับ
    int Array2[ 100 ] ; // อาเรย์สำเนา
    int number = 0 ;   // ตัวแปรเก็บจำนวนข้อมูลที่ผู้ใช้กรอก
    int input ;

    
    while( number != 0 ) {
        printf( "Input value to Array1 [%d]: \n", number ) ;
        scanf( "%d", &input ) ;
        if( input == -1 ) {
            break ;
        }
        Array1[ number ] = input ;
        number++ ;
    }

    // แสดงข้อมูลใน Array1
    printf( "Array1 = " ) ;
    for( int i = 0 ; i < number ; i++ ) {
        printf( "%d ", Array1[ i ] ) ;
    }
    printf( "\n" ) ;

    // ตั้งค่าเริ่มต้นของ Array2 ให้เป็น 0
    for( int i = 0 ; i < number ; i++ ) {
        Array2[ i ]  = 0 ;
    }

    // แสดงข้อมูลใน Array2 ก่อนคัดลอก
    printf( "Array2 = " ) ;
    for( int i = 0 ; i < number ; i++ ) {
        printf( "%d ", Array2[ i ] ) ;
    }
    printf( "\n" ) ;

    // คัดลอกข้อมูลจาก Array1 ไปยัง Array2
    printf( "--| Copy Data from Array1 to Array2\n" ) ;
    for( int i = 0 ; i < number ; i++ ) {
        Array2[ i ] = Array1[ i ] ;
    }

    // แสดงข้อมูลใน Array2 หลังคัดลอก
    printf( "Array2 = " ) ;
    for( int i = 0 ; i < number ; i++ ) {
        printf( "%d ", Array2[ i ] ) ;
    }
    printf( "\n" ) ;

    return 0 ;
}
