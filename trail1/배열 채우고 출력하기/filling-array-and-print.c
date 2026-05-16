#include <stdio.h>

int main() {
    // Please write your code here.
    char arry[20];

    for(int i = 0; i < 20; i++){
        scanf("%c", &arry[i]);
    }

    for(int i = 20-1; i >= 0; i--){
        if(i % 2 == 0) printf("%c", arry[i]);
        else continue; 
    }
    return 0;
}