#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int sum = a+b+c;
    int avg = (a+b+c)/3;
    printf("%d\n", sum);
    printf("%d\n", avg);
    printf("%d", sum-avg);
    return 0;
}