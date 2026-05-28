#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Please write your code here.
    char s1[1001];
    char s2[1001];

    scanf("%s ", s1);
    scanf("%s", s2);

    char c_s1[2001];
    strcpy(c_s1, s1);
    strcat(c_s1, s2);

    char c_s2[2001];
    strcpy(c_s2, s2);
    strcat(c_s2, s1);

    int sn1 = atoi(c_s1);
    int sn2 = atoi(c_s2);

    int sum = sn1 + sn2;
    printf("%d", sum);

    return 0;
}