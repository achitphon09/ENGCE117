/*#include <stdio.h>
int GetMatrix( int *row, int *col ) ;
int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;
    return 0 ;
}//end function*/

#include <stdio.h>
#include <stdlib.h>

int* GetMatrix(int *row, int *col) {
    // รับจำนวนแถวและคอลัมน์จากผู้ใช้
    printf("Enter number of rows and columns: ");
    scanf("%d %d", row, col);

    // จองหน่วยความจำสำหรับเมทริกซ์
    int *matrix = (int *)malloc((*row) * (*col) * sizeof(int));

    // ตรวจสอบการจองหน่วยความจำ
    if (matrix == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // รับค่าของแต่ละสมาชิกในเมทริกซ์
    printf("Enter matrix elements:\n");
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            scanf("%d", &matrix[i * (*col) + j]);
        }
    }

    return matrix;
}

int main() {
    int *data, m, n;

    // เรียกฟังก์ชัน GetMatrix เพื่อรับค่าจากผู้ใช้
    data = GetMatrix(&m, &n);

    // แสดงผลเมทริกซ์ที่ได้
    printf("The matrix is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]);
        }
        printf("\n");
    }

    // ปล่อยหน่วยความจำที่จองไว้
    free(data);

    return 0;
}
