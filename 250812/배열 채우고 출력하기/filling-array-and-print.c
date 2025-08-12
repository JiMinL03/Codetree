#include <stdio.h>

int main() {
    // Please write your code here.
    char chr[10];
    for(int i=0; i<10; i++){
        scanf(" %c", &chr[i]);
    }

    for(int i=9; i>=0; i--){
        printf("%c", chr[i]);
    }
    return 0;
}