#include <stdio.h>
int main() {

    int number;       // ตัวเลขที่ผู้ใช้กรอก
    int i;            // ตัวแปรใช้วนลูปจาก number ลงมา
    int prime_number; // ตัวแปรบอกว่าเป็นจำนวนเฉพาะหรือไม่
    int j;            // ตัวแปรใช้ตรวจสอบตัวหาร

    // รับค่าจากผู้ใช้
    printf("Enter Number : \n");
    scanf("%d", &number);

    i = number; // เริ่มต้นจากตัวเลขที่ผู้ใช้ป้อน
    do {
        prime_number = 1; // ตั้งค่าเริ่มต้น prime_number เป็นจริง (1)
        j = 2;

        // ใช้ while loop เพื่อตรวจสอบตัวหาร
        while (j * j <= i) {
            if (i % j == 0) { // ถ้าหารลงตัว
                prime_number = 0; // ไม่ใช่จำนวนเฉพาะ
                break;            // หยุดการตรวจสอบ
            }
            j++; // ตรวจสอบตัวหารถัดไป
        }

        // ถ้าเป็นจำนวนเฉพาะและมากกว่า 1 ให้พิมพ์ออกมา
        if (prime_number && i > 1) {
            printf("%d ", i);
        }

        i--; // ลดค่า i ลงทีละ 1
    } while (i >= 2); // ทำงานจนกว่า i จะน้อยกว่า 2

    printf("\n");

    return 0;
}
