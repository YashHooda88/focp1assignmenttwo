#include <stdio.h>
int digitSum(int n) {
    int sum = 0;
    while (n > 0) { sum += n % 10; n /= 10; }
    return sum;
}
int main(void) {
    int n, a[100000];
    long long count = 0;
    if (scanf("%d", &n) != 1 || n < 0 || n > 100000) return 1;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (digitSum(a[i]) == digitSum(a[j])) count++;
    printf("%lld\n", count);
    return 0;
}
