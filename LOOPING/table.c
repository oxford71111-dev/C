#include <stdio.h>   
#include <conio.h>    
int main()
{
     int a,b,c;
     printf("Enter Any Nuber");
     scanf("%d",&a);
     b=1;
     char x$='y';
    while (x$=='y')
    {

     
     while (b<=10)
     {
        c=a*b;
        printf("\n %d*%d=%d",a,b,c);
         b++;
     }
    }
      printf("\n do you want agian (y/n)");
      scanf("%c", &x$);
  
    getch();         
    return 0;      
}
