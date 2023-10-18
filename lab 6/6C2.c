#include <stdio.h>
/*in digital world colors are specified in RGB format, with values of R, G, and B varying on integer scale from 
0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format with values of C, M, Y and K 
varying on a real scale from 0.0 to 1.0. Convert RGB color to CMYK as per formula:
- White=Max(red/255,green/255,blue/255)
- Cyan=(white - red/255)/white
- Magenta=(white - green/255)/white
- Yellow=(white - blue/255)/white
- Black=1 - white
Note: if RGB values are all 0, then the CMY values are all 0 and the K value is 1.*/
void main() {
    int red, green, blue;
    float r1, g1, b1, white, cyan, magenta, yellow, black,max;

    printf("Enter RGB values (0 to 255):\n");
    printf("Red: ");
    scanf("%d", &red);
    printf("Green: ");
    scanf("%d", &green);
    printf("Blue: ");
    scanf("%d", &blue);
    r1=red/255.0;
    g1=green/255.0;
    b1=blue/255.0;

    if(r1>=g1){
        if(r1>=b1)
        max=r1;
        else 
        max=b1;
    }
    else{
        if(g1>=b1)
       max=g1;
        else
       max=b1;  
    }

    white=max;

    cyan=(white - r1)/white;
    magenta=(white - g1)/white;
    yellow=(white - b1)/white;
    black=1 - white;
    
    printf("CMYK values:\n");
    printf("Cyan: %f\n", cyan);
    printf("Magenta: %f\n", magenta);
    printf("Yellow: %f\n", yellow);
    printf("Black: %f\n", black);
    printf("%f",white);

}
