#include <stdio.h>
#include <string.h>

struct Employee {
    char name[ 100 ] ;
    float salary ;
    int duration ;
} ;

int main() {
    struct Employee employees[ 100 ] ; // เก็บข้อมูลพนักงานสูงสุด 100 คน
    int count = 0 ;                  // จำนวนพนักงานที่ได้รับข้อมูล
    char choice ;
    float totalSalary = 0 ;          // รวมเงินเดือนทั้งหมด
    int maxDuration = 0 ;            // อายุงานสูงสุด
    int maxIndex = -1 ;              // ดัชนีของพนักงานที่มีอายุงานสูงสุด

    do {
        printf( "Do you want to Enter Employee Information? (y/n) : \n" ) ;
        scanf( " %c", &choice ) ;

        if ( choice == 'y' || choice == 'Y' ) {
            printf( "----\n" ) ;
            printf( "Employee Name : \n" ) ;
            scanf( "%s", employees[ count ].name ) ;
            printf( "Salary (Bath/Month) : \n" ) ;
            scanf( "%f", &employees[ count ].salary ) ; 
            printf( "Duration (Year) : \n" ) ;
            scanf( "%d", &employees[ count ].duration ) ;

            totalSalary += employees[ count ].salary ;

            // ตรวจสอบว่าเป็นพนักงานที่อายุงานมากที่สุดหรือไม่
            if( employees[ count ].duration > maxDuration ) {
                maxDuration = employees[ count ].duration ;
                maxIndex = count ;
            }

            count++ ;
        }
    } while ( choice != 'n' && choice != 'N' ) ;

    // คำนวณเงินเดือนเฉลี่ย
    float averageSalary = ( count > 0 ) ? totalSalary / count : 0 ;

    // แสดงผลลัพธ์
    printf( "\nOutput:\n" ) ;
    printf( "Average of Salary : %.2f Bath\n", averageSalary ) ;
    printf( "Payment of every month : %.2f Bath\n", totalSalary ) ;
    printf( "----------------------------------------\n" ) ;
    if( maxIndex != -1 ) {
        printf( "** Most duration in this business **\n" ) ;
        printf( "Name : %s (%d Years)\n", employees[ maxIndex ].name, employees[ maxIndex ].duration ) ;
        printf( "Salary : %.2f Bath\n", employees[ maxIndex ].salary ) ;
    }

    return 0 ;
}