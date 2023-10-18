#include<stdio.h>
//area of circle
void main(){
    const float pia=3.14;
    float area,r;
    printf("enter value of r:");
    scanf("%f",&r);
    area=pia*r*r;
    printf("area :%f",area);
}