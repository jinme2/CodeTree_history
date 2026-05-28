#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    char s[10001];

    sprintf(s, "%d", n);

    int len = strlen(s);
    int sum = 0;

    for(int i = 0; i < len; i++){
        sum += (s[i] - '0');
    }

    printf("%d", sum);
    return 0;
}