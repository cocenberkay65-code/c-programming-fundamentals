#include<stdio.h>
#define PI 3.14
int menu(void);
void kare(void);
void daire(double y);
int main()
{
    int x,y;
    double yari;
    do
    {
        x=menu();
        if(x==1)
            kare();
        else if(x==2)
        {
            printf("Dairenin yaricapini giriniz: ");
            scanf("%lf", &yari);
            daire(yari);
        }
    }while(x!=3);
    printf("Dur.");
    return 0;
}

int menu()
{
    int tercih;
    printf("\n1.Kare\n");
    printf("2.Daire\n");
    printf("3.Dur\n");
    scanf("%d", &tercih);
    return(tercih);
}

void kare()
{
    double kenar;
    printf("Karenin kenarini giriniz: ");
    scanf("%lf", &kenar);
    printf("Alan = %5.2f\n", kenar*kenar);
}

void daire(double y)
{
    double alan;
    alan=PI*y*y;
    printf("Alan = %5.2f\n", alan);
}