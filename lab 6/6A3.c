#include<stdio.h>
//Check whether the entered character is upper case, lower case, digit or any special character
void main(){
    char ch;
    printf("enter charachter:");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
      printf("given character is lower case");
      else if(ch>='A'&& ch<='Z')
    printf("given character is uper case");
      else if(ch>='0'&& ch<='9')
    printf("given character is digit");
    else 
    printf("given character is special sybmol");
}