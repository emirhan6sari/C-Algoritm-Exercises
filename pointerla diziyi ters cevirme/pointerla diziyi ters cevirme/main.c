#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dizi[10]={1,2,3,4,5,6,7,8,9,10};
   int *p;
   int *p2;
   int boyut = sizeof dizi/sizeof dizi[0];
   int i;
   int temp;// temp gecici degisken.
   p=dizi;
   p2=dizi;
   for(i=0;i<boyut-1;i++,p++);
   for(i=0;i<boyut/2;i++,p--,p2++)
   {
       temp=*p;
       *p=*p2;
       *p2=temp;
   }
   for(i=0;i<boyut;i++)
   {
       printf("%d\n",dizi[i]);
   }
    return 0;
}
