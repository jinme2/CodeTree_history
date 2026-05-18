#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char str[100];
    char str2[100];

    scanf("%s", str);
    scanf("%s", str2);

    int len = strlen(str);
    int len2 = strlen(str2);

    printf("%d",len+len2);

    return 0;
}