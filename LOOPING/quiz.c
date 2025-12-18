#include <stdio.h>
#include <conio.h>

int main()
{
    int op;
    char p, x = 'y';

    while (x == 'y')
    {
        printf("\n Congratulations For Participating in this Quiz Game ");
        printf("\n Are You Ready? (y/n): ");
        scanf(" %c", &p);
        
        if (p == 'n')
        {
            break;
             printf("\n Thank you");
        }
       

        do
        {
            int op;
            printf("\n Who Is The Father Of Computer?");
            printf("\n 1. Charles Babbage");
            printf("\n 2. Saurav");
            printf("\n 3. Anmol");
            printf("\n 4. Alok");
            printf("\n Choose correct Answer: ");
            scanf("%d", &op);

            if (op == 1)
            {
                printf("\n You Are Correct ");
            }
            else
            {
                printf("\n You Are Incorrect ");
            }
           op++;
        } while (op<=10);  

        printf("\n Do You Want To Play More? (y/n): ");
        scanf(" %c", &x);
    }

    getch();
    return 0;
}
