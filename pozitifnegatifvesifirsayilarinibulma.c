#include<stdio.h>
int main()
{
    int pos=0,neg=0,sifir=0,n,sayi,i;
    printf("Kac tane sayi girilecek:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("%d.sayi: ", i);
        scanf("%d", &sayi);
        if(sayi>0)
            pos++;
        else if(sayi<0)
            neg++;
             else
             sifir++;
        
    }
    printf("\n%d adet pozitif sayi.", pos);
    printf("\n%d adet negatif sayi.", neg);
    printf("\n%d adet sifir sayisi.", sifir);
    return 0;
}