#include <stdio.h>
#include <stdlib.h>

// continue

int main()
{

    int a=0, b=0, c=0, d=0;
    printf("start! ");
    scanf("%d %d %d %d", &a, &b, &c, &d);


    if (a>b && a>c && a>d)
    {
      printf("%d", a);
    if (b>c && b>d)
    {
      printf("%d", b);
    }
    if (c>d)
    {
      printf("%d", c);
    }
    if (c>d)
    {
      printf("%d", d);
    }
    }

    if (b>a && b>c && b>d)
    {
      printf("%d", b);
    if (a>c && a>d)
    {
      printf("%d", a);
    }
    if (c>d)
    {
      printf("%d", c);
    }
    if (c>d)
    {
      printf("%d", d);
    }
    }

    if (c>a && c>b && c>d)
    {
      printf("%d", c);
    if (a>b && a>d)
    {
      printf("%d", a);
    }
    if (b>d)
    {
      printf("%d", b);
    }
    if (b>d)
    {
      printf("%d", d);
    }
    }

    if (d>a && d>b && d>c)
    {
      printf("%d", d);
    if (a>b && a>c)
    {
      printf("%d", a);
    }
    if (b>c)
    {
      printf("%d", b);
    }
    if (b>c)
    {
      printf("%d", c);
    }
    }

  return 0;
}