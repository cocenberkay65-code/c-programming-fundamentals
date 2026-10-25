#include<stdio.h>
int topla(int a);
int main()
{
    int x,sonuc;
    printf("Bir tamsayi giriniz: ");
    scanf("%d", &x);
    sonuc=topla(x);
    printf("Toplam = %d",sonuc);
    return 0;
}

int topla(int a)
{
    int i,s;
    s=0;
    for(i=1; i<=a; i++)
    {
        s=s+i;
    }
    return s;
}