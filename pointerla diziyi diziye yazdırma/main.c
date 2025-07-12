#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  ahmet[5]= {98,52,86,64,78};
    int emir[5];
    int *p;
    int *p2;
    p=ahmet;
    p2=emir;
    int boyut = sizeof ahmet/ sizeof ahmet[0];
    for(int i=0; i<boyut; i++)
    {
        *p2=*p;
        p++;
        p2++;
    }
    for(int i=0; i<boyut; i++)
    {
        printf("%d \t",ahmet[i]);
    }
    printf("\n");
    printf("\n");
    for(int i=0; i<boyut; i++)
    {
        printf("%d \t",emir[i]);
    }
    return 0;
}
