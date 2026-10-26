#include<stdio.h>
int faktoriyel(int k);
int kombinasyon(int n,int r);
int main()
{
    int k,s,cevap;
    printf("Iki tamsayi giriniz: ");
    scanf("%d %d", &k, &s);
    cevap=kombinasyon(k,s);
    printf("Cevap: %d", cevap);
    return 0;
}

int faktoriyel(int k)
{
    int i,s=1;
    for(i=1; i<=k; i++)
    {
        s*=i;
    }
    return s;
}

int kombinasyon(int n,int r)
{
    int s;
    s=faktoriyel(n)/(faktoriyel(r)*(faktoriyel(n-r)));
    return s;
}

