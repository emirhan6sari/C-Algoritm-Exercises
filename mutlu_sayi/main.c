/*Mutlu Sayý Nedir?
Bir sayý, þu kurala göre iþlemler sonucu 1 oluyorsa, bu sayý "mutlu sayý" olarak adlandýrýlýr:

Sayýnýn her bir basamaðýnýn karesi alýnýr ve toplanýr.
Elde edilen yeni sayý üzerinde ayný iþlem tekrarlanýr.
Bu iþlemler sonucu sayý 1 olursa, bu sayý **"mutlu sayý"**dýr.
Eðer bir döngüye girerse (örneðin, sürekli 4, 16, 37 gibi deðerler tekrar eder), sayý mutlu deðildir.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,aratoplam=0,kalan=0,toplam=0;
    int alt_sinir,ust_sinir;

    printf("bir altsinir giriniz:");
    scanf("%d",&alt_sinir);
    printf("bir ustsinir giriniz:");
    scanf("%d",&ust_sinir);
    for(i=alt_sinir ; i<ust_sinir ; i++)
    {
        sayi=i;
        while(toplam!=1 && toplam!=4)
        {
            toplam=0;

            while(sayi>0)
            {
                kalan=sayi%10;
                aratoplam=kalan*kalan;
                toplam=aratoplam+toplam;
                sayi=sayi/10;

            }
            sayi=toplam;
        }


        if(toplam==1)
            printf("%d sayiniz mutludur.",i);
        toplam=0;



    }
    return 0;
}
