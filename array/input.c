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
    printf("\n do you want to see your Number(y/n)");
    scanf(" %c", &a$);
    if (a$ == 'y')
    {
        i = 1;
        for (i = 1; i <= 10; i++)
        {
            printf("\n The %d Number is =%d ", i, x[i]);
        }
    }

    getch();
    return 0;
}