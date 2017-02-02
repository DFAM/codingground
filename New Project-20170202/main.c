#include <stdio.h>

void func1(int a, char c)
{
    a=a+10;
    c='k';
    printf("\n Func1 a=%d  c=%c",a,c);
    return;
}

void func2(int *a, char *c)
{
    *a=*a+10;
    *c='k';
    printf("\n Func2 *a=%d  *c=%c",*a,*c);
    return;
}

int main()
{
 int a=30;
 char c='U';
 func1(a,c);
 printf("\n Dopo Func1 a=%d  c=%c",a,c);
 func2(&a,&c);
 printf("\n Dopo Func2 *a=%d  *c=%c\n",a,c);
 return 0;
}



