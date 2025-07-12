#include <stdio.h>
#include <stdlib.h>

int main()
{
    char metin[50];
    int i;
    printf("bir metin giriniz:\n");
    scanf("%s",&metin);
    int boyut=0 ;
    while (metin[i]!='\0')
    {
        boyut++;
        i++;
    }
    char silinecek;// a silecegimiz harf
    printf("silinecek harfi giriniz:");
    scanf("%s",&silinecek);
    for(i=0;i<boyut;i++)
    {
        if (metin[i]==silinecek)
        {
            metin[i]= NULL;
            metin[i]= 'b';
        }

    }
    for(i=0;i<boyut;i++)
    {
        printf("%c\t",metin[i]);
    }

    return 0;
}
