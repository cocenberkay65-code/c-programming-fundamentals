#include<stdio.h>
#define PI 3.14
void alan(double a);

int main()
{   double y;
    printf("Dairenin yaricapini giriniz: ");
    scanf("%lf", &y);
    alan(y);
    return 0;
}

void alan(double a)
{
    double sonuc;
    sonuc=PI*a*a;
    printf("Alan = %5.2f", sonuc);
}