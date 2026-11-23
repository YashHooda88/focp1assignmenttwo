#include <stdio.h>
int countMultiples(int n, int k) { return n / k; }
int main(void) {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2 || n < 0 || k <= 0) return 1;
    printf("%d\n", countMultiples(n, k));
    return 0;
}
