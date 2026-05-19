#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.

    char a[101];
    char b[101];
    char ab[201];
    char ba[201];

    scanf("%s", a);
    scanf("%s", b);

    strcpy(ab, a);
    strcat(ab, b);

    strcpy(ba, b);
    strcat(ba, a);

    int len = strlen(ba);

    for(int i = 0; i < len; i++){
        if(ab[i] != ba[i]){
            printf("false");
            return 0;
        }
    }
    printf("true");
    return 0;
}