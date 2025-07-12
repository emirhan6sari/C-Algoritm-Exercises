#include <stdio.h>
#include <stdlib.h>
void sirala(int *p,int boyut)
{

    for(int i=0;i<boyut;i++)
    {
        printf("%d \n",*p);
        printf("\n");
        p+=1;
    }

}
int main()
{
    int *p;
    int dizi[15];
    p=dizi;
    int boyut = sizeof dizi/sizeof dizi[0];
    srand(time('\0'));/*srand fonksiyonu her calistirdigimizde  randda farkli deger atamasi yapar.*/
    for( int i=0;i<boyut;i++)
    {
        dizi[i]=rand()%100;
    }
    sirala(p,boyut);
    return 0;
}
