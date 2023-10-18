#include<stdio.h>

void main(){
    int n;

    printf("how many number do you want for array:");
    scanf("%d",&n);

    int a[n],i,oddcount=0,evencount=0;
    for(i=0;i<n;i++){
        printf("enter number[%d]:",i+1);
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            evencount++;
        }
        else {
            oddcount++;
        }
        
    }
    printf("odd count=%d\n",oddcount);
    printf("even count=%d\n",evencount);
}