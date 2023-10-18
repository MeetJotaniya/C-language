#include <stdio.h>

void main() {
	
    int i;
    
    printf("ASCII Characters and Their Values:\n");

    for ( i = 0; i <= 127; i++) {
        printf("Character: %c  Value: %d\n", i, i);
    }

}
