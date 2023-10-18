#include<stdio.h>

void main(){
    int i,n,t1=0,t2=1,nextterm=t1+t2;
    printf("how many number do you want in fabonacci series?:");
    scanf("%d",&n);
    printf("fabonacci series:\n0\n1\n");
    for(i=3;i<=n;i++){
        printf("%d\n",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }
}
