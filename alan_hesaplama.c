#include<stdio.h>
int main()
{  double kenar1, kenar2, alan;
   char ch;
   
   printf("Alanini hesaplamak istediginiz sekli seciniz k/K(kare) veya d/D(Dikdortgen):");
   scanf("%c", &ch);
   
   if(ch=='k' || ch=='K')
   {  /*Karenin alaninin hesaplanmasi*/
      printf("Karenin kenar bilgisini giriniz:");
      scanf("%lf", &kenar1);
      alan=kenar1*kenar1;
      printf("Karenin alani: %.2lf\n", alan);
   }
   if (ch=='d' || ch=='D')
   {  /*Dikdortgenin alaninin hesaplanmasi*/
      printf("Dikdortgenin kenar bilgilerini giriniz:");
      scanf("%lf %lf", &kenar1, &kenar2);
      alan=kenar1*kenar2;
      printf("Dikdortgenin alani: %.2lf\n", alan);
   }
   if (ch!='k' && ch!='K' && ch!='d' && ch!='D'){  
      printf("[HATA] Lutfen gecerli bir secim yapiniz!\n\n");
   }
   return 0;
}