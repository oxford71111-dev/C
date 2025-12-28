#include <stdio.h>   
#include <conio.h>    
int main()
{
     int i,g;
     for(i=1;i<=6;i++)
     {
        for(g=1;g<=i;g++)
           {
               printf("%d",g);
           }
      printf("\n");
     }
    getch();         
    return 0;      
}
