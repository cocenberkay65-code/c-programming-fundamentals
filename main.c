#include <stdio.h>
int main() {
    printf("Bir sayi giriniz:");
    scanf("%d", &sayi);
    /*Bir sayının 7'ye bölünüp bölünmediğini kontrol et*/
    if (sayi % 7 == 0)
        printf("%d sayisi 7'ye tam bölünür.\n", sayi);
    else 
        printf("%d sayisi 7'ye tam bölünmez.\n", sayi);
    return 0;
}