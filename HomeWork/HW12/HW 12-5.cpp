#include <stdio.h>
#include <string.h>


struct Employee {
    char name[100];
    float salaryPerMonth;
    float taxPerYear;
};


void findMostTaxPayer(struct Employee employees[], int count, struct Employee *mostTaxPayer) {
    if (count == 0) return;
    *mostTaxPayer = employees[0];
    for (int i = 1; i < count; i++) {
        if (employees[i].taxPerYear > mostTaxPayer->taxPerYear) {
            *mostTaxPayer = employees[i];
        }
    }
}

int main() {
    struct Employee employees[100];
    int count = 0;
    char name[100];
    float salaryPerMonth;

    float totalSalaryPerMonth = 0, totalTaxPerYear = 0;
    struct Employee mostTaxPayer;

    while (1) {
        printf("Employee %d's Name : \n", count + 1);
        scanf("%s", name);

        if (strcmp(name, "-1") == 0) {
            break; // หยุดรับข้อมูลเมื่อใส่ -1
        }

        printf("Salary (Bath/Month) : \n");
        scanf("%f", &salaryPerMonth);

        // เพิ่มข้อมูลพนักงานในระบบ
        strcpy(employees[count].name, name);
        employees[count].salaryPerMonth = salaryPerMonth;
        employees[count].taxPerYear = salaryPerMonth * 12 * 0.07;

        // คำนวณผลรวม
        totalSalaryPerMonth += salaryPerMonth;
        totalTaxPerYear += employees[count].taxPerYear;

        count++;
    }

    // หาคนที่ต้องจ่ายภาษีมากที่สุด
    if (count > 0) {
        findMostTaxPayer(employees, count, &mostTaxPayer);
    }

    printf("\nAll salary per month: %.2f Bath\n", totalSalaryPerMonth);
    printf("All salary per year: %.2f Bath\n", totalSalaryPerMonth * 12);
    printf("Tax (7%% per year) : %.2f Bath\n", totalTaxPerYear);

    if (count > 0) {
        printf("Most tax in company : %s (%.2f Bath per year)\n", 
               mostTaxPayer.name, mostTaxPayer.taxPerYear);
    }

    return 0;
}
