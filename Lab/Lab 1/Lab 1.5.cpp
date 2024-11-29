/*#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    GetMatrix( &data, &m, &n ) ;
    return 0 ;
}//end function*/
#include <stdio.h>
#include <stdlib.h> // สำหรับ malloc และ free

void GetMatrix(int **value, int *row, int *col) {
    // รับจำนวนแถวและคอลัมน์จากคีย์บอร์ด
    printf("Enter the number of rows: ");
    scanf("%d", row);
    printf("Enter the number of columns: ");
    scanf("%d", col);

    // จองหน่วยความจำสำหรับเมทริกซ์
    *value = (int*) malloc(*row * *col * sizeof(int));

    // รับค่าของสมาชิกในเมทริกซ์จากคีย์บอร์ด
    printf("Enter the elements of the matrix: ");
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            scanf("%d", &(*value)[i * (*col) + j]);
        }
    }
}

int main() {
    int *data, m, n;
    GetMatrix(&data, &m, &n);

    // แสดงผลเมทริกซ์
    printf("Matrix (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]);
        }
        printf("\n");
    }

    // ปล่อยหน่วยความจำที่จอง
    free(data);

    return 0;
}
