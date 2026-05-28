#include <stdio.h>
#include <string.h>
#define MAX 100000

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    int arry[100];
    int sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &arry[i]);
        sum += arry[i];
    }

    char s[MAX];
    sprintf(s, "%d", sum);

    int len = strlen(s);

    char t = s[0];
    for(int i = 0 ; i < len - 1; i++){
        s[i] = s[i+1];
    }
    s[len-1] = t;
    printf("%s", s); 
    return 0;
}