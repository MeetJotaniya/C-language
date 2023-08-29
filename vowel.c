#include<stdio.h>

void main(){
	char c;
	printf("enter alphabate");
	scanf("%c",&c);
	if(c=='a' || c=='A' || c=='E' || c=='e' || c=='i' || c=='I' || c=='o' || c=='O' || c=='U' || c=='u')
	{
	printf("alphabet is vowel");
}
    else{
    	printf("alphabet is consonant");
	} 
}
