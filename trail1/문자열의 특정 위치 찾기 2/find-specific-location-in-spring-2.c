#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char str[5][10] = { "apple", "banana", "grape", "blueberry", "orange" };

    char c;
    scanf("%c", &c);

    int idx[5] = {0, };
    int count = 0;

    for(int i = 0; i < 5; i++){
        if(str[i][2] == c || str[i][3] == c){
            idx[i]++;
            count++;
        }
    }

    for(int i = 0; i < 5; i++){
        if(idx[i] > 0) printf("%s\n", str[i]);
    }
    printf("%d", count);

    return 0;
}