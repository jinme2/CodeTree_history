#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char s[21];
    scanf("%s", s);
    int len = strlen(s);

    int n;

    while(len > 1){
        scanf("%d", &n);
        if(len > n){
            for(int i = n; i < len; i++){
                s[i] = s[i+1];
            }
            s[len] = '\0';

        } else {
            s[len-1] = '\0';
        }

        printf("%s\n", s);
        len--;
    }


    return 0;
}