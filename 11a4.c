#include<stdio.h>
void main(){
	int i,n,x,y,ans=1;
	printf("enter the value of x :");
	scanf("%d",&x);
	printf("enter the value of y :");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
	    ans=ans*x;}
		printf("ans is %d\n",ans);
}
