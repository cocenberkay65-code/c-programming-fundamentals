#include<stdio.h>
int main()
{
    int sayi,toplam,i;
    toplam=0;
    i=0;
    
    do
    {   printf("Bir tamsayi giriniz: ");
        scanf("%d", &sayi);
        if(sayi<0)
           continue;
        if(sayi>0)
        {   i++;
            toplam+=sayi;
        }
        if(sayi==0)
            break;
    } while(1);
    
    printf("Pozitif sayilarin toplami: %d\n", toplam);
    printf("Pozitif sayilarin ortalamasi: %.2f",((double)toplam)/i);
    return 0;
}