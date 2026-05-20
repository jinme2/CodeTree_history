#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char s[101];
    scanf("%s", s);
    int len = strlen(s);

    int idx = -1;
    for(int i = 0 ; i < len; i++){
        if(s[i] == 'e') {
            idx = i;
            break;
        }
    }

    for(int i = idx; i < len; i++){
        s[i] = s[i+1];
    }

    s[len-1] = '\0';

    printf("%s", s);
    return 0;
}