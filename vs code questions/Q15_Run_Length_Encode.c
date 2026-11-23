#include <stdio.h>
int main(void) {
    char s[1000];
    if (scanf("%999s", s) != 1) return 1;
    for (int i = 0; s[i] != '\0'; ) {
        int j = i, count = 0;
        while (s[j] != '\0' && s[j] == s[i]) { count++; j++; }
        printf("%c%d", s[i], count);
        i = j;
    }
    putchar('\n');
    return 0;
}
