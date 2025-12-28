#include <stdio.h>
#include <conio.h>
int main()
{
    int x[10];
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("\n Enter %d Number ", i);
        scanf("%d", &x[i]);
    }

    char a$;
    printf("\n do you want to see Gretes Number(y/n)");
    scanf(" %c", &a$);
    if (a$ == 'y')
    {
        //print
        i = 1;
        int y=1;
        for (i = 1; i <= 10; i++)
        { 
              if(x[y]<=x[i+1])
               {printf("\n The gretest Number is =%d ",x[i]);}
              else
               {printf("\n The %d Number is =%d ", i, x[i+1]);}
        }
    }

    getch();
    return 0;
}