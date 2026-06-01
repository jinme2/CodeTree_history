#include <stdio.h>
#include <string.h>

int check369(int a, int b){
    int count = 0;
    for(int i = a; i <= b; i++){
        if(i % 3 == 0){
            count++;
            continue;
        }

        char str[8];
        sprintf(str, "%d", i);
        int len = strlen(str);

        for(int j = 0 ; j < len; j++){
            if(str[j] == '3' || str[j] == '6' || str[j] == '9'){
                count++;
                break;
            }
        }
        
    }
    return count;
}

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", check369(a, b));
    return 0;
}