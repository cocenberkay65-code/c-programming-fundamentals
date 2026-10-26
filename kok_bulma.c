#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x1,x2;
    printf("Denklemin katsayilarini giriniz: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if( (b*b)-(4*a*c)>0 )
    {
        x1=(-b + sqrt(b*b-(4*a*c)))/(2*a);
        x2=(-b - sqrt(b*b-(4*a*c)))/(2*a);
        printf("Iki farkli kok: %.2f %.2f\n", x1, x2);
    }
    else if( (b*b)-(4*a*c)<0 )
    {
        printf("Koku yoktur.\n");
    }
    else
    {
        x1=(-b + sqrt(b*b-(4*a*c)))/(2*a);
        x2=(-b - sqrt(b*b-(4*a*c)))/(2*a);
        printf("Iki esit kok: %.2f\n", x1);
    }
}
