#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char str[2][20];

    scanf("%s %s", str[0], str[1]);

    int len = strlen(str[0]);
    int len2 = strlen(str[1]);

    if(len == len2) printf("same");
    else if(len > len2) printf("%s %d",str[0], len);
    else printf("%s %d",str[1], len2);
    //len > len2 ? printf("%s %d",str[0], len) : printf("%s %d", str[1], len2);
    return 0;
}