#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char s[21];
    char c;

    scanf("%s %c", s, &c);
    int idx = 0;
    int flag = 0;


    for(int i = 0; i < strlen(s); i++){
        if(s[i] == c) {
            idx = i;
            flag = 1;
            break;
        }
    }

    if(flag) printf("%d",idx);
    else printf("No");
    return 0;
}