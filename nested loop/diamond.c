#include <stdio.h>   
#include <conio.h>    
int main()       
{
     int i,j,k;
     for(i=0;i<=5;i++)
     {
        for(j=i;j<=5;j++)
           {
               printf(" ");
           }
           for(k=1;k<=i*2-1;k++)
           {
            printf("*");
           }
      printf("\n");
     }
      for(i=0;i<=5;i++)
     {
           for(k=0;k<=i;k++)
           {
            printf(" ");
           }
            for(j=6;j>=2*i-1;j--)
           {
             printf("*");
           }
             printf("\n");
      
     }
    getch();         
    return 0;      
}
