#include <stdio.h>
int a[1000][1000];
int main(void) {
    int r, c, count = 0;
    if (scanf("%d %d", &r, &c) != 2 || r < 1 || c < 1 || r > 1000 || c > 1000) return 1;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            int peak = 1;
            if (i > 0 && a[i][j] <= a[i-1][j]) peak = 0;
            if (i+1 < r && a[i][j] <= a[i+1][j]) peak = 0;
            if (j > 0 && a[i][j] <= a[i][j-1]) peak = 0;
            if (j+1 < c && a[i][j] <= a[i][j+1]) peak = 0;
            if (peak) count++;
        }
    printf("%d\n", count);
    return 0;
}
