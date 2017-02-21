//This is a version of the mario pyramid that needs to print the amount of rows allocated by the user 

#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //ask the user for the height of the pyramid
    printf("Height:");
    int height = get_int();
    int space = 0;
    int hash = 0;
    int d = height;
 
    for (int i = 1; i <= d; i++)
    {
       
        for (space = 1; space <= d - i; space++)
        {
            printf(" ");
        }
        
        //space = space - 1;
        
        for (hash = 1; hash <= i + 1; hash++)
        {
            printf("#");
            
        }
        
        printf("\n");
        
         
    }//end height loop
    
    
    //output the pyramid
    
    
    return 0;
}