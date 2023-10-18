#include<stdio.h>

void main(){
    int count,number,sum=0;
    float avg,total_numbers;
    printf("how many numbers do you want:");
    scanf("%d",&count);

    total_numbers=count;

    printf("enter numbers\n");

        for(;count!=0;count--){
            scanf("%d",&number);
            sum+=number;
        }
        avg=sum/total_numbers;
        printf("sum of total numbers=%d\n",sum);
        printf("average of total numbers=%f",avg);      
    
}
