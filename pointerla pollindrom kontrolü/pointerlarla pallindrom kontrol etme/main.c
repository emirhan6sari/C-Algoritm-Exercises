#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    char *p1 , *p2 ;
    int  kontrol;
    printf("bir cumle giriniz:\n");
    gets(cumle);
    for (p2=cumle;*p2;p2++);
    p2--;
    kontrol=1;
    for(p1=cumle ; p1<p2 && kontrol ; p1++,p2--)
    {
        if(*p1 != *p2)
        {
            kontrol=0;
        }
    }
    if(kontrol==1)
    {
      printf("cumleniz pallindromdur.\n");
    }
    else
    {
        printf(" cumleniz pallindrom degildir \n");
    }
    return 0;
}
