
#include <stdio.h> 

void main()
{   
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Roman numerals: ");        

    while(num != 0)
    {

        if (num >= 1000)    
        {
           printf("m");
           num -= 1000;
        }

        else if (num >= 900)  
        {
           printf("cm");
           num -= 900;
        }        

        else if (num >= 500)   
        {           
           printf("d");
           num -= 500;
        }

        else if (num >= 400) 
        {
           printf("cd");
           num -= 400;
        }

        else if (num >= 100)
        {
           printf("c");
           num -= 100;                       
        }

        else if (num >= 90)   
        {
           printf("xc");
           num -= 90;                                              
        }

        else if (num >= 50) 
        {
           printf("l");
           num -= 50;                                                                     
        }

        else if (num >= 40)    
        {
           printf("xl");           
           num -= 40;
        }

        else if (num >= 10)   
        {
           printf("x");
           num -= 10;           
        }

        else if (num >= 9)    
        {
           printf("ix");
           num -= 9;                         
        }

        else if (num >= 5) 
        {
           printf("v");
           num -= 5;                                     
        }

        else if (num >= 4) 
        {
           printf("iv");
           num -= 4;                                                            
        }

        else if (num >= 1) 
        {
           printf("i");
           num -= 1;                                                                                   
        }

    }
}