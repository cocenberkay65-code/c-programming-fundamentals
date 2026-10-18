#include <stdio.h>
int main (void)
{ int sayiA, sayiB, sayiC, buyuk;
  printf("Uc sayi giriniz:");
  scanf("%d %d %d", &sayiA, &sayiB, &sayiC);
  buyuk=sayiA;
  if(sayiB>buyuk)
    buyuk=sayiB;
  if(sayiC>buyuk)
    buyuk=sayiC;
printf("Buyuk sayi: %d\n",buyuk);
return(0);
}