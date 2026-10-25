#include<stdio.h>
int main()
{
    int sayi, max=0;
    printf("Sayi giriniz: ");
    scanf("%d", &sayi);
    while(sayi>0)
    {
        if(sayi>max)
            max=sayi;
        printf("Sayi giriniz:");
        scanf("%d", &sayi);
    }
    printf("\nEn buyuk pozitif sayi: %d\n", max);
    return 0;
}
