#include <stdio.h>

int main() {
    // Please write your code here.
    int y;
    scanf("%d", &y);
    //윤년
    if(y % 4 == 0){
        if(y % 100 == 0 && y%400 != 00) printf("false");
        else printf("true");
    }
    return 0;
}