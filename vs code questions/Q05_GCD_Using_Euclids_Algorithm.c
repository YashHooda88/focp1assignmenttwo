#include <stdio.h>
long long gcd(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main(void) {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) != 2 || (a == 0 && b == 0)) return 1;
    printf("%lld\n", gcd(a, b));
    return 0;
}
