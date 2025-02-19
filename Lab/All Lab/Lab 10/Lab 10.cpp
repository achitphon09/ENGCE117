#include <stdio.h>

void SetArray( int **, int *n ) ;
void PrintArray( int [], int n, char comment[ 20 ] ) ;
int BinarySearch( int [], int n, int find ) ;
void MergeSort( int t[], int k ) ;
void Merge( int *u, int m, int *v, int n, int *t ) ;

int main() {
    int n = 0, pos = -1, find = -1, *data ;
    SetArray( &data, &n ) ;     PrintArray( data, n, "Origin" ) ;
    MergeSort( data, n ) ;      PrintArray( data, n, "Sort" ) ;
    printf( "Search (value) : " ) ;
    scanf( "%d", &find ) ;
    pos = BinarySearch( data, n, find ) ;
    printf( "FOUND %d in POSITION = Arr[%d]\n", data[pos], pos ) ;
    return 0 ;
}

void PrintArray( int *Arr, int n, char comment[ 20 ] ) { //TODO: comment คือข้อความที่อยากแสดงตรงส่วนหัวของชุดข้อความ
    printf("%s : ",comment);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",Arr[i]);
    }
    printf("\n");
}

void SetArray( int **Arr, int *n ) {
    printf("Enter Arr size : ");
    scanf("%d",n);
    *Arr = new int[*n];

    for(int i = 0; i < *n;i++){
        printf("Arr[%d] : ",i);
        scanf("%d",&(*Arr)[i]);
    }
}

int BinarySearch( int arr[], int n, int find ) {
   int i, j, m;
   i = 0; j = n - 1;
   while(i<=j) {
    m = (i+j) / 2;
    if(arr[m] == find ) {
        return m;
    }else if(arr[ m] < find){
        i = m + 1;
    }else{
        j = m - 1;
    }
   }
   return -1;
}

void MergeSort( int t[], int k ) {
    if(k <= 1){
        return;
    }
        int m = k/2;
        int *u = new int[m];
        int *v = new int[k - m];

        for(int i = 0; i < m ;i++){
            u[i] = t[i];
        }
        for(int i = 0 ;i < k-m;i++){
            v[i] = t[m+i];
        }
        MergeSort(u,m);
        MergeSort(v,k-m);
        Merge(u, m, v, k - m, t);
        delete[]u;
        delete[]v;
}

void Merge( int *u, int m, int *v, int n, int *t ) {
     int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (u[i] < v[j]) {
            t[k++] = u[i++];
        } else {
            t[k++] = v[j++];
        }
    }

    while (i < m) {
        t[k++] = u[i++];
    }

    while (j < n) {
        t[k++] = v[j++];
    }
}