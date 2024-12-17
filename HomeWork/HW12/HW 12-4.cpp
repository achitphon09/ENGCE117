#include <stdio.h>
#include <string.h>

struct Employee {
    char name[ 100 ] ;
    int exp ;
    float salaryMultiplier ;
} ;

int main() {
    struct Employee employees[ 100 ] ;
    
    int count = 0 ;
    char name[ 100 ] ;
    int exp ;
    int multiplierCounts[ 6 ] = { 0 } ; // สำหรับเก็บจำนวนคนที่อยู่ในช่วง x1.0 ถึง x2.0
    int minIndex = -1, maxIndex = -1 ; // เก็บ index ของคนที่ได้เงินเดือนน้อยที่สุดและมากที่สุด

    while (1) {
        printf( "Employee %d Name : \n", count + 1 ) ;
        scanf( "%s", name ) ;

        if( strcmp( name, "-1" ) == 0 ) { // หากใส่ -1 ให้หยุดการกรอกข้อมูล
            break ;
        }

        printf( "EXP : \n" ) ;
        scanf( "%d", &exp ) ;

        // เพิ่มข้อมูลพนักงานในอาร์เรย์
        strcpy( employees[ count ].name, name ) ;
        employees[ count ].exp = exp ;

        // คำนวณ multiplier
        if( exp <= 1000 ) {
            employees[ count ].salaryMultiplier = 1.0 ;
            multiplierCounts[ 0 ]++ ;
        } else if ( exp <= 2000 ) {
            employees[ count ].salaryMultiplier = 1.2 ;
            multiplierCounts[ 1]++ ;
        } else if ( exp <= 3000 ) {
            employees[ count ].salaryMultiplier = 1.4 ;
            multiplierCounts[ 2 ]++ ;
        } else if ( exp <= 4000 ) {
            employees[ count ].salaryMultiplier = 1.6 ;
            multiplierCounts[ 3 ]++ ;
        } else if ( exp <= 5000 ) {
            employees[ count ].salaryMultiplier = 1.8 ;
            multiplierCounts[ 4 ]++ ;
        } else {
            employees[ count ].salaryMultiplier = 2.0 ;
            multiplierCounts[ 5 ]++ ;
        }

        // ตรวจสอบคนที่ได้เงินเดือนมากที่สุดและน้อยที่สุด
        if( maxIndex == -1 || employees[ count ].salaryMultiplier > employees[ maxIndex ].salaryMultiplier ) {
            maxIndex = count ;
        }
        if ( minIndex == -1 || employees[ count ].salaryMultiplier < employees[ minIndex ].salaryMultiplier) {
            minIndex = count ;
        }

        count++ ;
    }

    // แสดงผลลัพธ์
    printf( "\n**** Salary Result ****\n" ) ;
    printf( "x1.0 count %d\n", multiplierCounts[ 0 ] ) ;
    printf( "x1.2 count %d\n", multiplierCounts[ 1 ] ) ;
    printf( "x1.4 count %d\n", multiplierCounts[ 2 ] ) ;
    printf( "x1.6 count %d\n", multiplierCounts[ 3 ] ) ;
    printf( "x1.8 count %d\n", multiplierCounts[ 4 ] ) ;
    printf( "x2.0 count %d\n", multiplierCounts[ 5 ] ) ;

    if( maxIndex != -1 ) {
        printf( "The Employee get x2.0 is %s\n", employees[ maxIndex ].name ) ;
    }
    if( minIndex != -1 ) {
        printf( "The Employee get x1.0 is %s\n", employees[ minIndex ].name ) ;
    }

    return 0 ;
}
