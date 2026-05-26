#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.

    char str[11];

    scanf("%s", str);
    int len = strlen(str);

    for(int i = 0; i <= len; i++){
        printf("%s\n", str);
        int last = str[len-1];
        for(int j = len-1; j > 0; j--){
            str[j] = str[j-1];
        }
        str[0] = last;
    }
    return 0;
}