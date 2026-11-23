#include <stdio.h>
int a[1000][1000];
int main(void) {
    int n, symmetric = 1;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < n && symmetric; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i][j] != a[j][i]) { symmetric = 0; break; }
    puts(symmetric ? "YES" : "NO");
    return 0;
}
