#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b;
    int i;
    a=1;
     b=2;
    for(i=1;i<10;i++)
   { 
     
     printf(" %d ",a);
     printf(" %d ",b);
    a=a+b;
    b=a+b;
   }
    getch();
    return 0;
}