#include <stdio.h>

int power(int a, int b){
    int pa = 1;
    for(int i = 0; i < b; i++){
        pa *= a;
    }
    return pa;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    // Please write your code here.
    printf("%d", power(a,b));
    return 0;
}