#include <stdio.h>
#include <stdlib.h>

int KnapsackBT(int *w, int *v, int n, int wx, int i, int *x);

int main() {
    int n, wx, vx, i;
    
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter wx : ");
    scanf("%d", &wx);
    
    int *w = new int[n];
    int *v = new int[n];
    for (i = 0; i < n; i++) {
        printf("weight for item %d : ", i);
        scanf("%d", &w[i]);
    }
    for (i = 0; i < n; i++) {
        printf("value for item %d : ", i);
        scanf("%d", &v[i]);
    }
    
    int *x = new int[n];
    for (i = 0; i < n; i++) x[i] = 0;
    
    vx = KnapsackBT(w, v, n, wx, 0, x);
    for (i = 0; i < n; i++) printf("%d ", x[i]);
    printf("\nValue = %d", vx);
    
    delete[] w;
    delete[] v;
    delete[] x;
    
    return 0;
}

void backtrack(int *w, int *v, int n, int wx, int i, int currW, int currV, int *x, int *bestX, int *maxV) {
    if (i == n) {
        if (currV > *maxV) {
            *maxV = currV;
            for (int j = 0; j < n; j++) bestX[j] = x[j];
        }
        return;
    }
    
    if (currW + w[i] <= wx) {
        x[i] = 1;
        backtrack(w, v, n, wx, i + 1, currW + w[i], currV + v[i], x, bestX, maxV);
    }
    
    x[i] = 0;
    backtrack(w, v, n, wx, i + 1, currW, currV, x, bestX, maxV);
}

int KnapsackBT(int *w, int *v, int n, int wx, int i, int *x) {
    int *bestX = new int[n];
    for (int i = 0; i < n; i++) bestX[i] = 0;
    int maxV = 0;
    backtrack(w, v, n, wx, 0, 0, 0, x, bestX, &maxV);
    for (int i = 0; i < n; i++) x[i] = bestX[i];
    delete[] bestX;
    return maxV;
}