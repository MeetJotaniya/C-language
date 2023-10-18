#include <stdio.h>

void main() {
    int n,sum=0,i=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n%2==1)
    printf("sum of 1-2+3-...+%d:",n);
    else
    printf("sum of 1-2+3-...-%d:",n);
    while (i<= n) {
        if(i % 2 == 1)
        sum+=i;
        else
        sum-=i;
        i++;
    }
    printf("%d", sum);
}
