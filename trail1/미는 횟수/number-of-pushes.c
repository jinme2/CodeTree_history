#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char a[101];
    char b[101];

    scanf("%s %s", a,b);

    int len = strlen(a);
    int result = -1;

    if (strcmp(a, b) == 0) {
        printf("0\n");
        return 0;
    }

    for(int n = 0; n < len; n++){
        char last = a[len-1];
        for(int i = len-1; i > 0; i--){
            a[i] = a[i-1];
        }
        a[0] = last;

        if(strcmp(a, b) == 0){
            result = n+1;
            break;
        }
    }

    printf("%d", result);
    return 0;
}