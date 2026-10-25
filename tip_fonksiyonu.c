#include<stdio.h>
char tip(void);
int main()
{
    printf("Sayinin tipi: %c", tip());
    return 0;
}

char tip(void)
{
    double c;
    printf("Bir reel sayi giriniz: ");
    scanf("%lf", &c);
    if(c<0)
        return ('n');
    else if(c>0)
        return ('p');
    else 
        return ('s');
}