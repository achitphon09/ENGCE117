#include <stdio.h>
#include <stdlib.h>

void SetArray(int **Arr, int *n);
// void PrintArray(int **Arr,int n);  // สร้างเพิ่ม  PrintArray ตามโจทย์ อาจารย์
int BinarySearchRecursive(int arr[], int left, int right, int find);

int main() {
    int n = 0, pos = -1, find = -1, *data;
    SetArray(&data, &n);
    // PrintArray(&data,n);                                      // แสดง array 
    if(n == 0){                                                                  // test case 2 ของ อาจารย์ กรณี 0 
        return 0;
    }
    scanf("%d", &find);//Search (value)
    pos = BinarySearchRecursive(data, 0, n - 1, find);
    if (pos != -1)
        printf("FOUND %d in POSITION = Arr[%d]\n", data[pos], pos);
    else
        printf("VALUE NOT FOUND\n");
    delete[] data;
    return 0;
}

void SetArray(int **Arr, int *n) {

    scanf("%d", n);
    if(*n == 0){
        printf("Error");
        return ;
    }
    *Arr = new int[*n];
    int val;
    printf("Enter %d sorted elements:\n",*n);
    for (int i = 0; i < *n  ; i++ )
        {
            scanf("%d",&val);
            (*Arr)[i] = val;
        }    

    
    
  

   
}


void PrintArray(int **Arr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", (*Arr)[i]);
    }
}

int BinarySearchRecursive(int *Arr,int left,int right,int find) {

    if(left > right){
        return -1;
    }
    int m = (left + right) / 2;

    if (Arr[m] == find) {
        return m; 
    } else if (Arr[m] < find) {
        return BinarySearchRecursive(Arr, m + 1, right, find);
    } else {
        return BinarySearchRecursive(Arr, left , m - 1, find); 
    }
}