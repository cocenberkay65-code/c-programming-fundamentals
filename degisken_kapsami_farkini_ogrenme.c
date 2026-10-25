#include<stdio.h>
void f(int k);
int a=3;
int main(void)
{
    int x,y;
    x=10;
    y=5;

    printf("%3d%3d%3d\n", x,y,a);
    f(x);
    a=a+1;

    printf("%3d%3d%3d\n", x,y,a);
    return 0;
}

void f(int k)
{
    int s;
    s=k+1;
    k=k*3;
    a=a+1;

    printf("%3d%3d%3d\n", k,s,a);
}