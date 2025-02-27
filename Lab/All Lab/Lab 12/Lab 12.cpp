#include <stdio.h>
#include <stdlib.h>

int *KnapsackKP(int *w, int *v, int n, int wx);

int main() {
    int wx, ans = 0, n, i;
    
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
    
    int *x = KnapsackKP(w, v, n, wx);
    for (i = 0; i < n; i++) printf("%d ", x[i]);
    for (i = 0; i < n; i++) if (x[i] == 1) ans += v[i];
    printf("\nValue = %d\n", ans);
    
    delete[] w;
    delete[] v;
    delete[] x;
    
    return 0;
}

int *KnapsackKP(int *w, int *v, int n, int wx) {
    int **dp = new int *[n + 1];
    for (int i = 0; i <= n; i++)
        dp[i] = new int[wx + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= wx; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (w[i - 1] <= j)
                dp[i][j] = (v[i - 1] + dp[i - 1][j - w[i - 1]] > dp[i - 1][j]) ? v[i - 1] + dp[i - 1][j - w[i - 1]] : dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    int *x = new int[n];
    for (int i = 0; i < n; i++)
        x[i] = 0;

    int j = wx;
    for (int i = n; i > 0 && j > 0; i--) {
        if (dp[i][j] != dp[i - 1][j]) {
            x[i - 1] = 1;
            j -= w[i - 1];
        }
    }

    for (int i = 0; i <= n; i++)
        delete[] dp[i];
    delete[] dp;

    return x;
}

void printSelectedItems(int *x, int *w, int *v, int n) {
    printf("Selected items:\n");
    for (int i = 0; i < n; i++) {
        if (x[i] == 1) {
            printf("Item %d: Weight = %d, Value = %d\n", i, w[i], v[i]);
        }
    }
}
