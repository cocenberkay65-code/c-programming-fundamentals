#include<stdio.h>
int main()
{
    int n;
    int num, bayrak, i;
    printf("Bir pozitif tam sayi giriniz:");
    scanf("%d", &n);
    printf("\n1-%d arasindaki butun asal sayilar:", n);
    printf("\n----------------------------------\n");
    
    for(num=2; num<=n; num++)
    {
        bayrak=1;
        i=2;
        while((i<num) && (bayrak==1))
        {
            if((num%i)==0)
               bayrak=0;
            i=i+1;
        }
        if((bayrak==1))
            printf("%4d", num);
    }
    return 0;
}