#include<stdio.h>
void ciz(void);
int main()
{
    ciz();
    return 0;
}

void ciz(void)
{
    int i,j,x;
    printf("Bir tamsayi giriniz: ");
    scanf("%d", &x);
    for(i=0; i<x; ++i)
    {   for(j=0; j<x; ++j)
        {    printf("*");
             
        }
        printf("\n");
    }
}