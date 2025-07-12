#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;// a aranan sayiyi kullanicidan alan degisken.
    int dizi[5]={12,52,63,73,98};
    printf("aranacak sayiyi giriniz:\n ");
    scanf("%d",&a);
    int boyut = sizeof dizi/sizeof dizi [0];
    int *p;
    p=dizi;
    int i;
    int kontrol=0;
    for( i=1;i<=boyut;i++)
    {
      if(*p==a)
        {
          printf("girdiginiz sayi dizide %d sirasindadir.",i);
          kontrol=1;
        }
       p++;
    }
    if(kontrol==0)
    {
        printf(" aradiniz eleman dizide mevcut degildir.");
    }

    return 0;
}
