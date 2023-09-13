#include <stdio.h>

void main(){
	
	int n,m,i;
	
	printf("Enter Big Number : ");
	scanf("%d",&n);
	
	printf("Enter Small Number : ");
	scanf("%d",&m);
	i=m;
	while(i<=n && i>=m){
		if(i%2==0){
	 	printf("%d\v",i);
	    }
	 	i++;
	}
}
