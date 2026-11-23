#include <stdio.h>
int main(void) {
    int n;
    long long target, count = 0;
    int a[100000];
    if (scanf("%d %lld", &n, &target) != 2 || n < 0 || n > 100000) return 1;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if ((long long)a[i] + a[j] == target) count++;
    printf("%lld\n", count);
    return 0;
}
