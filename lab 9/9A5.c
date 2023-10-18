#include<stdio.h>

void main(){
    int n,fac,i=1;
    printf("enter any  positive integer number:");
    scanf("%d",&n);
    printf("factors of %d are:\n",n);
    while(i<=(n/2)){
        if(n%i==0){
        printf("%d\n",i++);}
        else
    {
        i++;
    }
    }
}
