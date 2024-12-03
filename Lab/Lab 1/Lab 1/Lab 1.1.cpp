#include <stdio.h>

int main() {
    int number ; //กำหนดตัวแปรชื่อ number ประเภท int
    scanf( "%d", &number ) ; //รับค่าที่ป้อนจากแป้นพิมพ์ประเภท int โดยตัวแปรชื่อ number

    for( int i = 1 ; i <= number ; i++ ) { //สร้างลูปให้เริ่มจาก 1 ไปเรื่อย ๆ จนกว่าจะถึงค่าที่ผู้ใช้ป้อนจากแป้นพิมพ์
        printf( "[%d] Hello World\n", i ) ; //แสดงข้อความ 
    }
    return 0 ;
}