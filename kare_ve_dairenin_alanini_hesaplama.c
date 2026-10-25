#include<stdio.h>
#define PI 3.141592654
int main()
{
    int cevap;
    double a,r,alan;

    do{
        printf("\n    1.Kare");
        printf("\n    2.Daire");
        printf("\n    3.Bitir.");
        printf("\n\nLutfen seceneginizi belirtiniz: ");
        scanf("%d", &cevap);

        switch(cevap){
            case 1: printf("Karenin kenar uzunlugunu giriniz: ");
                    scanf("%lf", &a);
                    alan=a*a;
                    printf("Karenin alani: %.2lf\n", alan);
                    break;
            case 2: printf("Dairenin yaricapini giriniz: ");
                    scanf("%lf", &r);
                    alan=PI*r*r;
                    printf("Dairenin alani: %.2lf\n", alan);
                    break;
        }
    }while(cevap!=3);
    return 0;
}