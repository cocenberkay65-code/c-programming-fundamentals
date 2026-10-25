#include<stdio.h>
void bul(int a,int b);
int main()
{
    int x,y;
    printf("Iki pozitif tamsayi giriniz: ");
    scanf("%d %d", &x, &y);
    bul(x,y);
    return 0;
}

void bul(int a,int b)
{
    int i,carp;
    carp=1;
    for(i=1; i<=b; ++i)
        carp*=a;
    printf("Sonuc = %d", carp);
}