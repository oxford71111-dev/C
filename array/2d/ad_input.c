#include <stdio.h>
#include <conio.h>
int main()
{
    int n,m;
    printf("how many row you need");
    scanf(" %d",&n);
    printf("how many columb you need");
    scanf(" %d",&m);
    int x[n][m], i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter Any Number");
            scanf(" %d", &x[i][j]);
        }
    }
    char a$;
    printf("\n do you want to see Number(y/n)");
    scanf(" %c", &a$);
    if (a$ == 'y')
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                printf("\t %d ",x[i][j]);
            }
             printf("\n");
        }
    }
    getch();
    return 0;
}