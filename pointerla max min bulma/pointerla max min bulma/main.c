#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int  *p;
    int dizi [15];
    int boyut= sizeof dizi/sizeof dizi[0];
    srand(time(NULL));
    for(int i=0;i<boyut;i++)
    {
        dizi[i]=rand()%100;
        printf("%d\t",dizi[i]);
    }
    for(int i=0;i<boyut;i++)
    {
     p=dizi;
     p++   ;
    }
    int max,min;
    p=dizi;
    max=*p;
    for(i=1;i<boyut;i++)
    {
      if  (max<*p)
      {
          max=*p;
      }
      p++;
    }
    printf("\n");
    printf("maximum deger=%d\n",max);
    p=dizi;
    min=*p;
    for(i=1;i<boyut;i++)
    {
      if  (min>*p)
      {
          min=*p;
      }
      p++;
    }
    printf("minimum deger=%d\n",min);
    return 0;
}
