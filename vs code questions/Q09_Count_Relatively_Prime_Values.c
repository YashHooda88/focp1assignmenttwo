#include <stdio.h>
int gcd(int a, int b) {
    while (b) { int t = b; b = a % b; a = t; }
    return a;
}
int main(void) {
    int n, m, count = 0;
    if (scanf("%d %d", &n, &m) != 2 || n <= 0 || m < 0) return 1;
    for (int x = 1; x <= m; x++) if (gcd(x, n) == 1) count++;
    printf("%d\n", count);
    return 0;
}
