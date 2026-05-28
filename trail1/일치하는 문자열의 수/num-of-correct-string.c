#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    int n;
    char a[101];

    scanf("%d %s", &n, a);
    //printf("%d %s", n, a);

    int count = 0;
    for(int i = 0; i < n; i++){
        char t[101];
        scanf("%s", t);
        if(strcmp(a, t) == 0) count++;
    }

    printf("%d", count);
    return 0;
}