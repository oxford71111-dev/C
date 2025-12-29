#include <stdio.h>
#include <conio.h>
int main()
{
    int x[10];
    int i,min;
    for (i = 0; i <10; i++)
    {
        printf("\n Enter %d Number ", i+1);
        scanf("%d", &x[i]);
    }

    char a$;
    printf("\n do you want to arrange your Number in accending order?(y/n)");
    scanf(" %c", &a$);
    if (a$ == 'y')
    {
       min = x[0];
        for (i = 0; i < 10; i++)
        {
            if (x[i] <= x[0])
            {
                min = x[i];
            }
           
        }
        int j,miin;
         printf(" \n%d", min);
         for (i = 0; i < 10; i++)
        {

            for (j = 0; j < 10; j++)
            {
            if (min<= x[i]<=x[j] )
            {
               miin=x[i];
            }
            printf(" \n%d", miin); 
            }
        }
    }
    getch();
    return 0;
}