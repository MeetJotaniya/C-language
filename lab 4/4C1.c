#include<stdio.h>
//seconds into hours, minutes & seconds
void main(){
    int s,h,m;
    printf("enter seconds:");
    scanf("%d",&s);
    h=s/3600;
    s%=3600;
    m=s/60;
    s%=60;
    printf("%d:%d:%d",h,m,s);
}