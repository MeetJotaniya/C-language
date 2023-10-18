#include <stdio.h>
 
 void main(){
    char i;

    printf("Capital (upper) case characters:\n");
    for(i='A'; i<='Z'; i++)
        printf("%c ",i);
 
    printf("\n\nLower case characters:\n");
    for(i='a'; i<='z'; i++)
        printf("%c ",i);
}