#include<stdio.h>
int main()
{
    double kenar1, kenar2, alan;
    char ch;
    printf("Alanini hesaplamak istediginiz sekli seciniz k/K(kare) veya d/D(dikdortgen):");
    scanf(" %c", &ch);
    switch(ch)
    {
        case 'k':
        case 'K': printf("Karenin kenar bilgisini giriniz:");
                  scanf("%lf", &kenar1);
                  alan=kenar1*kenar1;
                  printf("Karenin alani: %.2lf", alan);
                  break;
        case 'd':
        case 'D': printf("Dikdortgenin kenar bilgilerini giriniz:");
                  scanf("%lf %lf", &kenar1, &kenar2);
                  alan=kenar1*kenar2;
                  printf("Dikdortgenin alani: %.2lf", alan);
                  break;
        default: printf("Lutfen dogru bir secim yapiniz!");
    }
    return 0;
}

