#include <cs50.h>
#include <stdio.h>



int main (void)
{
  int minutes = 1;
  
   do
   {
    //user input
    printf("Minutes: ");
    minutes = get_int();
    
    //shower head  rate
    int water_total = 192 * minutes;                    
    
    //bottles sum
    int sum = water_total / 16;
    
    printf("Bottles: %i" "\n", sum);
   
   return 0; 
    
   } 
   while( minutes != -1 );
   

}

