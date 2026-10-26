#include<stdio.h>
int main()
{
    int sayi1, sayi2, sayi3, sayi4;
    printf("Dort tamsayi giriniz: ");
    scanf("%d %d %d %d", &sayi1, &sayi2, &sayi3, &sayi4);
    if ( sayi1>sayi2 && sayi2>sayi3 && sayi3>sayi4 )
    {
        printf("Azalan sirada sayilar.\n");
    }
    else if ( sayi1<sayi2 && sayi2<sayi3 && sayi3<sayi4 )
    {
        printf("Artan sirada sayilar.\n");
    }
    else 
    {
        printf("Sirasiz sayilar.");
    }
    return 0;
}