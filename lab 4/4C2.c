#include<stdio.h>
//days into year, week & days
void main(){
    int d,w,y;
    printf("enter days:");
    scanf("%d",&d);
    y=d/365;
    d%=365;
    w=d/7;
    d%=7;
    printf("%d year,%d week and %d days",y,w,d);
}