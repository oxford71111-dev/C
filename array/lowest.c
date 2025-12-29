#include <stdio.h>
#include <conio.h>
int main()
{
    int x[10];
    int i, min;
    for (i = 0; i < 10; i++)
    {
        printf("\n Enter %d Number ", i+1);
        scanf("%d", &x[i]);
    }

    char a$;
    printf("\n do you want to see Lowest Number(y/n)");
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
        printf("\n The Lowest Number is %d", min);
    }
    getch();
    return 0;
}