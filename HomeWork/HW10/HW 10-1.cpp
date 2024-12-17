#include <stdio.h>
int main() {

    char full_name[100]; // ตัวแปรเก็บชื่อและนามสกุล

    fgets( full_name, 100, stdin ) ;
    printf("Name : %s", full_name ) ; // รับค่าที่มีช่องว่างได้

    return 0;
}
 