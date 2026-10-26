#include<stdio.h>
#include<math.h>
int main()
{
    double y,g;
    printf("y reel sayisini giriniz: ");
    scanf("%lf", &y);
    if(y>10)
    {
        g = sqrt(pow(y,3) + 1);
    }
    else if(y<0)
    {
        g = y / (y + 15);
    }
    else 
    {
        g = exp(y) - 10;
    }
    printf("g(y) sonucu: %4f\n", g);
    return 0;
}