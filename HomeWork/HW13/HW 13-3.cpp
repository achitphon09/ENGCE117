#include <stdio.h>
#include <string.h>

// ฟังก์ชันค้นหาพนักงานที่จ่ายภาษีสูงสุด
void FindMaxTax(char maxTaxName[], float *maxTax, char name[], float tax);

// ฟังก์ชันพิมพ์ตัวเลขที่มีคอมม่า
void PrintWithComma(float number);

int main() {
    char name[50];
    char maxTaxName[50] = "";
    float salary, totalMonthlySalary = 0.0, totalYearlySalary = 0.0;
    float totalTax = 0.0, maxTax = 0.0;

    while (1) {
        printf("\nEmployee's Name: ");
        scanf("%s", name);

        // สิ้นสุดการกรอกเมื่อกรอก -1
        if (strcmp(name, "-1") == 0) {
            break;
        }

        printf("Salary (Bath/Month): ");
        scanf("%f", &salary);

        // คำนวณยอดรวมเงินเดือน
        totalMonthlySalary += salary;

        // คำนวณยอดรวมภาษี
        float yearlyTax = salary * 12 * 0.07;
        totalTax += yearlyTax;

        // ค้นหาพนักงานที่จ่ายภาษีสูงสุด
        FindMaxTax(maxTaxName, &maxTax, name, yearlyTax);
    }

    // คำนวณยอดรวมเงินเดือนต่อปี
    totalYearlySalary = totalMonthlySalary * 12;

    // แสดงผลสรุป
    printf("\nSummary:\n");
    printf("All salary per month: ");
    PrintWithComma(totalMonthlySalary);
    printf(" Bath\n");

    printf("All salary per year: ");
    PrintWithComma(totalYearlySalary);
    printf(" Bath\n");

    printf("Tax (7%% per year): ");
    PrintWithComma(totalTax);
    printf(" Bath\n");

    printf("Most tax in company: %s (", maxTaxName);
    PrintWithComma(maxTax);
    printf(" Bath per year)\n");

    return 0;
}

// ฟังก์ชันค้นหาพนักงานที่จ่ายภาษีสูงสุด
void FindMaxTax(char maxTaxName[], float *maxTax, char name[], float tax) {
    if (tax > *maxTax) {
        *maxTax = tax;
        strcpy(maxTaxName, name);
    }
}

// ฟังก์ชันพิมพ์ตัวเลขที่มีคอมม่า
void PrintWithComma(float number) {
    char str[50];
    sprintf(str, "%.2f", number);  // เปลี่ยนตัวเลขเป็นสตริงที่มีทศนิยม 2 ตำแหน่ง
    int len = strlen(str);

    // ถ้าความยาวมากกว่า 6 (หมายถึงตัวเลขในหลักพันขึ้นไป)
    if (len >= 7) {
        for (int i = len; i > (len - 6); i--) {
            str[i] = str[i - 1];  // สลับสตริงเพื่อใส่คอมม่า
        }
        str[len - 6] = ',';  // ใส่คอมม่า
        str[len + 1] = '\0';  // สิ้นสุดสตริง

        printf("%s", str);
    }
    // ถ้าความยาวมากกว่า 10 (หมายถึงตัวเลขในหลักล้านขึ้นไป)
    else if (len >= 10) {
        for (int i = len + 1; i > (len - 6); i--) {
            str[i] = str[i - 2];  // เลื่อนตัวอักษรเพื่อเพิ่มคอมม่า
        }
        str[len - 6] = ',';
        for (int i = len - 5; i > (len - 9); i--) {
            str[i] = str[i - 1];
        }
        str[len - 9] = ',';
        str[len + 2] = '\0';

        printf("%s", str);
    } else {
        // ถ้าตัวเลขน้อยกว่า 1,000
        printf("%s", str);
    }
}
