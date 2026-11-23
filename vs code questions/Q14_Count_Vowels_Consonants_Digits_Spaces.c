#include <stdio.h>
int main(void) {
    char line[1000];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    if (!fgets(line, sizeof(line), stdin)) return 1;
    for (int i = 0; line[i] != '\0'; i++) {
        char ch = line[i];
        if (ch >= 'A' && ch <= 'Z') ch += 'a' - 'A';
        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') vowels++;
            else consonants++;
        } else if (ch >= '0' && ch <= '9') digits++;
        else if (ch == ' ') spaces++;
    }
    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);
    return 0;
}
