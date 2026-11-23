#include <stdio.h>
int a[1000][1000];
int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2 || r < 1 || c < 1 || r > 1000 || c > 1000) return 1;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < r; i++) {
        long long sum = 0;
        for (int j = 0; j < c; j++) sum += a[i][j];
        printf("%s%lld", i ? " " : "", sum);
    }
    putchar('\n');
    for (int j = 0; j < c; j++) {
        long long sum = 0;
        for (int i = 0; i < r; i++) sum += a[i][j];
        printf("%s%lld", j ? " " : "", sum);
    }
    putchar('\n');
    return 0;
}
