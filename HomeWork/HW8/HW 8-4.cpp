#include <stdio.h>


// ฟังก์ชันคำนวณ Factorial
int factorial (int n ) {
    if( n == 1 ) { // ถ้า n เท่ากับ 1 ให้คืนค่า 1
        return 1 ;
    }
    return n * factorial ( n - 1 ) ; // n คูณกับค่า factorial ของ (n-1)
}

// ฟังก์ชันแสดงชุดตัวเลข Factorial
void factorial_Series ( int n ) {
    if( n == 1 ) {
        printf( "1" ) ; // เมื่อถึง 1 ให้แสดง 1 และจบ
        return ;
    }
    printf( "%d x ", n ) ; // แสดงตัวเลขและ "x"
    factorial_Series( n - 1 ) ; // เรียกตัวเองซ้ำโดยลดค่า n ลง
}

int main() {
    int n ;
    scanf( "%d", &n ) ;

    printf( "%d! = ", n ) ;    
    factorial_Series( n ) ; //แสดงชุดตัวเลข
    printf( "\n" ) ;

    int result = factorial( n ) ; //คำนวณค่า factorial
    printf( "%d! = %d\n", n, result ) ; //แสดงผลลัพธ์
    return 0 ;
}