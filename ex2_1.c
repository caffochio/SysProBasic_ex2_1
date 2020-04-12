#include <stdio.h>
#include <stdlib.h>

void comp(int *a, int *b)
{
    if (*a<*b)
    {
        int *temp;
        *temp=*a;
        *a=*b;
        *b=*temp;
    }
    return;
}

int main()
{
    int x,y;
    x=10;
    y=12;
    comp(&x, &y);
    printf("x=%d, y=%d\n",x,y);
    return(0);
}