#include<stdio.h>
int main()
{
    double x;
    double toplam,pay,payda,terim;
    int k;
    char cevap,atlat;
    do
    {
        printf("\nx degerini giriniz: ");
        scanf("%lf", &x);
        scanf("%c", &atlat);
        toplam=1;
        pay=x;
        payda=1;
        toplam+=pay/payda;
        

        for(k=2; k<=10; k++)
        {
            pay*=x;
            payda*=k;
            terim=pay/payda;
            toplam+=terim;
        }
    printf("Seri: %.4f\n\n", toplam);

    printf("x degeri girecek misiniz: ");
    scanf(" %c", &cevap);
    }while(cevap == 'E' || cevap == 'e');
    
    return 0;
}   