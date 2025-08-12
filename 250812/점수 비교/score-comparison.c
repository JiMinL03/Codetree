#include <stdio.h>

int main() {
    // Please write your code here.
    int math1, math2;
    int eng1, eng2;
    scanf("%d %d", &math1, &math2);
    scanf("%d %d", &eng1, &eng2);

    if(math1 >= math2 && eng1 >= eng2) printf("1");
    else printf("0");
    return 0;
}