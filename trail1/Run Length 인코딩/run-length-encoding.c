#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    int start = 0, end = 0;
    char alpha[1001];

    scanf("%s", alpha);

    int count = 0;

    char result[2001];
    int r_idx = 0;

    while(start < strlen(alpha)){
        if(alpha[start] == alpha[start+end] && (start+end) < strlen(alpha)){
            end++;
            count++;
        } else {
            result[r_idx++] = alpha[start];
            r_idx += sprintf(&result[r_idx], "%d", count);

            start += end;

            count = 0;
            end = 0;
        }
    }

    result[r_idx] = '\0';
    printf("%d\n%s", strlen(result), result);

    return 0;
}