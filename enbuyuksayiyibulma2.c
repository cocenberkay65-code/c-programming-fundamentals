#include<stdio.h>
int main()
{
    int sayi, max=0;
    for(printf("Sayi giriniz:"), scanf("%d", &sayi); sayi>0; printf("Sayi giriniz: "), scanf("%d", &sayi))
        if(sayi>max)
            max=sayi;
    printf("En buyuk pozitif sayi: %d", max);
    return 0;
}