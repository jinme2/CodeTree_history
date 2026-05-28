#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    // Please write your code here.

    char s1[9];
    char s2[9];

    char c_s1[9];
    char c_s2[9];

    scanf("%s %s", s1, s2);

    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);

    int idx_s1 = 0;
    int idx_s2 = 0;
    for(int i = 0; i < len_s1; i++){
        if(isdigit(s1[i]))
            c_s1[idx_s1++] = s1[i];
    }
    c_s1[idx_s1] = '\0';

    for(int i = 0; i < len_s2; i++){
        if(isdigit(s2[i]))
            c_s2[idx_s2++] = s2[i];
    }
    c_s2[idx_s2] = '\0';

    int sum = atoi(c_s1) + atoi(c_s2);

    printf("%d", sum);
    return 0;
}