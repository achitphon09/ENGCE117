#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    float height;
};

// ฟังก์ชันสำหรับการสลับข้อมูลระหว่างสองโครงสร้าง
void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// ฟังก์ชันสำหรับการเรียงลำดับตามความสูง
void sortStudents(struct Student students[], int count, int ascending) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if ((ascending && students[j].height > students[j + 1].height) ||
                (!ascending && students[j].height < students[j + 1].height)) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

int main() {
    struct Student roomA[100], roomB[100], school[200];
    int countA = 0, countB = 0, totalSchool = 0;
    char name[100];
    float height;

    // รับข้อมูลนักเรียนห้อง A
    printf("Room A\n");
    while (1) {
        printf("Name : \n");
        scanf("%s", name);
        if (strcmp(name, "-1") == 0) break;

        printf("Height (cm) : \n");
        scanf("%f", &height);

        strcpy(roomA[countA].name, name);
        roomA[countA].height = height;
        countA++;
    }

    // รับข้อมูลนักเรียนห้อง B
    printf("\nRoom B\n");
    while (1) {
        printf("Name : \n");
        scanf("%s", name);
        if (strcmp(name, "-1") == 0) break;

        printf("Height (cm) : \n");
        scanf("%f", &height);

        strcpy(roomB[countB].name, name);
        roomB[countB].height = height;
        countB++;
    }

    // เรียงลำดับความสูงในห้อง A จากตัวเล็กที่สุดไปตัวใหญ่ที่สุด
    sortStudents(roomA, countA, 1);

    // เรียงลำดับความสูงในห้อง B จากตัวเล็กที่สุดไปตัวใหญ่ที่สุด
    sortStudents(roomB, countB, 1);

    // รวมข้อมูลทั้งโรงเรียน
    for (int i = 0; i < countA; i++) {
        school[totalSchool++] = roomA[i];
    }
    for (int i = 0; i < countB; i++) {
        school[totalSchool++] = roomB[i];
    }

    // เรียงลำดับทั้งโรงเรียนจากตัวใหญ่ที่สุดไปตัวเล็กที่สุด
    sortStudents(school, totalSchool, 0);

    // แสดงผลลัพธ์
    printf("\nRoom A -> ");
    for (int i = 0; i < countA; i++) {
        printf("%s ", roomA[i].name);
    }

    printf("\nRoom B -> ");
    for (int i = 0; i < countB; i++) {
        printf("%s ", roomB[i].name);
    }

    printf("\nSchool -> ");
    for (int i = 0; i < totalSchool; i++) {
        printf("%s ", school[i].name);
    }

    return 0;
}