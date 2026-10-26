#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,delta,x1,x2;
    printf("Denklemin katsayilarini giriniz: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a==0)
    {
        printf("a sayisi 0 olamaz, ikinci dereceden bir denklem degildir.\n");
        return 1;
    }
    delta = b * b - 4 * a * c;

    if(delta>0)
    {
        x1=(-b + sqrt(delta)) / (2*a);
        x2=(-b - sqrt(delta)) / (2*a);
        printf("Iki farkli kok: %.2f %.2f\n", x1, x2);
    }
    else if(delta<0)
    {
        printf("Reel koku yoktur.\n");
    }
    else
    {
        x1= -b / (2 * a);
        printf("Iki esit kok: %.2f\n", x1);
    }
    return 0;
}
