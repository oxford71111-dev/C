#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    char x$ = 'y';
    while (x$ == 'y')
    {

        printf("Enter Any Number: ");
        scanf("%d", &a);
        if (a <= 1)
        {
            printf("the Number IS Neither Prime Nor Composite");
        }
        int i;
        for (i = 2; i <= a; i++)
        {
            b = a % i;
            if (i != a)
            {
                if (b == 0)
                {
                    printf("\n %d is the Composite Number", a);
                    break;
                }
                if (b != 0)
                {
                    printf("\n %d is the prime Number", a);
                    break;
                }
            }
            else if (i = a)
            {
                if (b == 0)
                {
                    printf("\n %d is the prime Number", a);
                }
            }
        }
        printf("\nDo You Want To Check Your Result Again? (y/n): ");
        scanf(" %c", &x$);
    }

    getch();
    return 0;
}