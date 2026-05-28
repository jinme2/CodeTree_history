#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char s[101];

    while(1){
        scanf("%s", s);
        if(strcmp(s, "END") == 0) break;

        int len = strlen(s);

        for(int i = 0; i < len/2; i++){
            char t = s[i];
            s[i] = s[len-1-i];
            s[len-1-i] = t;
        }

        printf("%s\n", s);
    }
    return 0;
}