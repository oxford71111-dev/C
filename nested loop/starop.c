#include <stdio.h>   
#include <conio.h>    
int main()
{
     int i,g;
     for(i=0;i<5;i++)
     {
        for(g=5;g>i;g--)
           {
               printf("*\t");
           }
      printf("\n");
     }
    getch();         
    return 0;      
}
