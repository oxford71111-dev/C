#include <stdio.h>   
#include <conio.h>    
int main()       
{
     int i,j,k,a=64;
     for(i=0;i<=5;i++)
     {
        for(j=i;j<=5;j++)
           {
               printf(" ");
           }
           
          
           for(k=1;k<=i*2-1;k++)
           {
            printf("%c",a);
            
           }
           
      printf("\n");
        a++;
     }
    getch();         
    return 0;      
}
