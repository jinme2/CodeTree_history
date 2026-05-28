#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    // Please write your code here.

    char s1[9];
    char s2[9];

    char c_s1[9];
    char c_s2[9];

    scanf("%s %s",s1, s2);

    //printf("%s %s",s1, s2);
    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);
    int idx_s1 = 0;
    int idx_s2 = 0;

    for(int i=0; i < len_s1; i++){
        if(i == len_s1 - 1) idx_s1 = len_s1;
        if(!isdigit(s1[i])){
            idx_s1 = i;
            break;
        }
    }
    for(int i=0; i < len_s2; i++){
        if(i == len_s2 - 1) idx_s2 = len_s2;
        if(!isdigit(s2[i])){
            idx_s2 = i;
            break;
        }
    }

    strncpy(c_s1, s1, idx_s1);
    c_s1[idx_s1] = '\0';

    strncpy(c_s2, s2, idx_s2);
    c_s2[idx_s2] = '\0';

    int sum = atoi(c_s1) + atoi(c_s2);

    printf("%d",sum);

    return 0;
}