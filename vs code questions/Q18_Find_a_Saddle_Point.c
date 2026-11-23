#include <stdio.h>
int a[1000][1000];
int main(void) {
    int r, c, found = 0;
    if (scanf("%d %d", &r, &c) != 2 || r < 1 || c < 1 || r > 1000 || c > 1000) return 1;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < r && !found; i++)
        for (int j = 0; j < c; j++) {
            int rowMin = 1, colMax = 1;
            for (int k = 0; k < c; k++) if (a[i][j] > a[i][k]) rowMin = 0;
            for (int k = 0; k < r; k++) if (a[i][j] < a[k][j]) colMax = 0;
            if (rowMin && colMax) {
                printf("%d %d %d\n", i, j, a[i][j]);
                found = 1; break;
            }
        }
    if (!found) puts("None");
    return 0;
}
