#include <stdio.h>
int main() 
{
    int arasinav1, arasinav2, final;
    double agirlik;
    char harf;
    printf("Arasinav notlarini ve final notunu giriniz:");
    scanf("%d %d %d", &arasinav1, &arasinav2, &final);
    agirlik=arasinav1*0.20 + arasinav2*0.30 + final*0.50;
    printf("Agirlikli notunuz: %5.2lf\n", agirlik);
    if (agirlik>=90)
        harf='A';
    else if (agirlik>=80)
        harf='B';
    else if (agirlik>=70)
        harf='C';
    else if (agirlik>=60)
        harf='D';
    else 
        harf='F';
    printf("Harf notunuz: %c", harf);
    return 0;
}