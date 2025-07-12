#include <stdio.h>
#include <stdlib.h>

 void  cagir(int *adres1,int *adres2)
{
    int temp;
    temp = *adres1;
    *adres1 = *adres2;
    *adres2 = temp;
    printf("void fonksiyonunun icinde a:%d\n void fonksiyonunun icinde b : %d \n",*adres1,*adres2);
}
int main()
{
    int a,b;
    a = 10;
    b = 20;
    printf("cagirmadan once a:%d\n cagirmadan once b : %d\n",a,b);
    cagir(&a,&b);
    printf("cagirdiktan sonra a: %d\n cagirdiktan sonra b:%d\n",a,b);
    return 0;
}
