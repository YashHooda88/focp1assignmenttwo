#include <stdio.h>
int main(void) {
    int n, a[100000];
    if (scanf("%d", &n) != 1 || n < 1 || n > 100000) return 1;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int current = 1, best = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) current++;
        else current = 1;
        if (current > best) best = current;
    }
    printf("%d\n", best);
    return 0;
}
