#include <stdio.h>
#include <string.h>

//void GetSet( int [], int * ) ;
void GetSet( int *data[], int *num ) {
    printf("Enter number of elements: ");
    scanf("%d", num) ;


    printf("Enter %d elements:\n", *num);
    for (int i = 0; i < *num; i++) {
        printf( "Element %d: ", i + 1 ) ;
        scanf( "%d", &(*data)[ i ] ) ;
    }
}

int main() {
    int *data, num ;
    GetSet( &data, &num ) ;
    return 0 ;
}




