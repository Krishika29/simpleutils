#include <stdio.h>

/* atoi: convert s to integer */
int atoi(char s[]) {
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

int main() {
    char str[32];
    scanf("%s", str);
    printf("%d\n", atoi(str));
    return 0;
}
