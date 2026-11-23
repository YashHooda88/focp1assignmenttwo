#include <stdio.h>
#include <limits.h>
int main(void) {
    int n, a[100000];
    long long best = LLONG_MAX;
    if (scanf("%d", &n) != 1 || n < 2 || n > 100000) return 1;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) {
            long long d = (long long)a[i] - a[j];
            if (d < 0) d = -d;
            if (d < best) best = d;
        }
    printf("%lld\n", best);
    return 0;
}
