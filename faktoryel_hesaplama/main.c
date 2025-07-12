#include <stdio.h>
#include <stdlib.h>

int fak1(int sayi)
{
    int carpim=1;
    for(int i=1; i<=sayi; i++)
    {
        carpim = carpim*i;

    }
    return carpim;
}
int main()
{
    int sayi;
    int fak;
    printf("faktoryeli alinacak sayiyi giriniz:\n");
    scanf("%d",&sayi);
    fak= fak1(sayi);
    printf("%d  sayisinin faktoryeli = %d \n",sayi,fak);
    return 0;
}
