#include <stdio.h>
//Multiply and divide a number by 2 without using multiplication/division operator
void main() {
    int n,r2,r1;
    printf("Enter a integer: ");
    scanf("%d", &n);
    r1=n>>1;
    r2=n<<1;
    printf("multiply by 2:%d\n divide by 2:%d",r2,r1);
}
