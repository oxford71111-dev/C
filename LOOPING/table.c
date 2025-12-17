#include <stdio.h>
#include <conio.h>
int main()
{
  int a, c;

  char x$ = 'y';
  while (x$ == 'y')
  {
    printf("Enter Any Nuber");
    scanf("%d", &a);
    int i;
    for (i = 1; i <= 10; i++)
    {
      c = a * i;
      printf("\n %d*%d=%d", a, i, c);
    }
    printf("\n do you want agian (y/n)");
    scanf(" %c", &x$);
  }

  getch();
  return 0;
}
