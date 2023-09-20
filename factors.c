#include<stdio.h>
void main(){ 
   int n;
   printf("enter value of n=");
   scanf("%d",&n);
   int i=1;
   while(i<=n){
   	if(n%i==0){
   		printf("%d\n",i);
   	}
   		i++;
	   
   	
   }
     
}
