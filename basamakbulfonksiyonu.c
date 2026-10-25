#include<stdio.h>
int basamak_bul(int x)
{
    int b,toplam=0;
    while(x)
    {
        b=x%10;
        toplam=toplam+1;
        x=x/10;
    }
    return(toplam);
}

int main()
{
    int a,t;
    printf("Bir tamsayi giriniz: ");
    scanf("%d", &a);
    t=basamak_bul(a);
    printf("Basamak sayisi: %d", t);
    return 0;
}