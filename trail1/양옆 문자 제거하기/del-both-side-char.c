#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char s[101];
    scanf("%s", s);

    int len = strlen(s);
    for(int i = 1; i < len; i++){
        s[i] = s[i+1];
    }

    for(int i = len-3; i < len; i++){
        s[i] = s[i+1];
    }

    printf("%s", s);
    return 0;
}