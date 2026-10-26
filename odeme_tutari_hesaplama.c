#include<stdio.h>
int main()
{
    float tutar, odenecek;
    printf("Alisveris tutarini giriniz: ");
    scanf("%f", &tutar);
    if(tutar<=100)
    {
        odenecek = tutar * 0.96;
    }
    else if(tutar>100 && tutar<=250)
    {
        odenecek = (100 * 0.95) + ( (tutar - 100) * 0.93);
    }
    else
    {
        odenecek = (100 * 0.94) + (150 * 0.92) + ( (tutar - 250) * 0.90);
    }
    printf("Odenecek tutar: %.2f\n", odenecek);
    return 0;
}